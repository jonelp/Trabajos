	package pe.edu.upc.entity;

import java.io.Serializable;
import java.util.Date;
import java.util.List;

import javax.persistence.CascadeType;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.OneToMany;
import javax.persistence.Table;
import javax.persistence.Temporal;
import javax.persistence.TemporalType;
import javax.validation.constraints.NotNull;

import org.hibernate.validator.constraints.NotBlank;
import org.hibernate.validator.constraints.NotEmpty;
import org.springframework.format.annotation.DateTimeFormat;

@Entity
@Table(name = "matricula")
public class Matricula implements Serializable{
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;


	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int idMatricula;
	
	
	@NotNull 
	//Validar que sea fecha presente
	@Temporal(TemporalType.DATE)
	@Column(name = "fechaMatricula")
	@DateTimeFormat(pattern="yyyy-MM-dd")
	private Date fechaMatricula;
	
	
	private String fehcaString;
	
	@ManyToOne
	@JoinColumn(name = "idEstudiante", nullable = false)
	private Estudiante estudiante;
	
	@OneToMany(mappedBy="matricula",fetch=FetchType.LAZY)
	private List<Detalle> detalles;

	public Matricula() {
		super();
	}

	public Matricula(int idMatricula, Date fechaMatricula, String fehcaString, Estudiante estudiante) {
		super();
		this.idMatricula = idMatricula;
		this.fechaMatricula = fechaMatricula;
		this.fehcaString = fehcaString;
		this.estudiante = estudiante;
	}

	public int getIdMatricula() {
		return idMatricula;
	}

	public void setIdMatricula(int idMatricula) {
		this.idMatricula = idMatricula;
	}

	public Date getFechaMatricula() {
		return fechaMatricula;
	}

	public void setFechaMatricula(Date fechaMatricula) {
		this.fechaMatricula = fechaMatricula;
	}

	public String getFehcaString() {
		return fehcaString;
	}

	public void setFehcaString(String fehcaString) {
		this.fehcaString = fehcaString;
	}

	public Estudiante getEstudiante() {
		return estudiante;
	}

	public void setEstudiante(Estudiante estudiante) {
		this.estudiante = estudiante;
	}

	public static long getSerialversionuid() {
		return serialVersionUID;
	}
	
	
	
	public double calcularmonto()
	{
		double monto = 0.0;
		int size = detalles.size();
		
		for(int i = 0 ;i<size;i++)
		{
			monto +=detalles.get(i).getMontoMatricula();
		}
		return monto;		
	}
	
	public double montototal()
	{
		return calcularmonto();
	}

}
