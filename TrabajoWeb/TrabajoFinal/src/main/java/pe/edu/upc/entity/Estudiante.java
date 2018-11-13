package pe.edu.upc.entity;

import java.io.Serializable;
import java.util.Date;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;
import javax.persistence.Temporal;
import javax.persistence.TemporalType;
import javax.validation.constraints.NotNull;
import javax.validation.constraints.Past;

import org.hibernate.validator.constraints.NotBlank;
import org.hibernate.validator.constraints.NotEmpty;
import org.springframework.format.annotation.DateTimeFormat;

@Entity
@Table(name = "estudiante")
public class Estudiante implements Serializable{

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	
	//ATRIBUTOS
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int idEstudiante;
	
	@NotEmpty(message="No puede estar vacío")
	@NotBlank(message="No puede estar en blanco")
	@Column(name = "nombreEstudiante", length = 30 ,nullable = false)
	private String nombreEstudiante;
	
	
	@NotNull 
	@Past(message = "Debe estar en pasado")
	@Temporal(TemporalType.DATE)
	@Column(name = "fechaEstudiante")
	@DateTimeFormat(pattern="yyyy-MM-dd")
	private Date fechaEstudiante;
	
	
	private String fehcaString;
	
	@ManyToOne
	@JoinColumn(name = "idApoderado", nullable = false)
	private Apoderado apoderado;

	public Estudiante() {
		super();
	}

	public Estudiante(int idEstudiante, String nombreEstudiante, Date fechaEstudiante, String fehcaString,
			Apoderado apoderado) {
		super();
		this.idEstudiante = idEstudiante;
		this.nombreEstudiante = nombreEstudiante;
		this.fechaEstudiante = fechaEstudiante;
		this.fehcaString = fehcaString;
		this.apoderado = apoderado;
	}

	public int getIdEstudiante() {
		return idEstudiante;
	}

	public void setIdEstudiante(int idEstudiante) {
		this.idEstudiante = idEstudiante;
	}

	public String getNombreEstudiante() {
		return nombreEstudiante;
	}

	public void setNombreEstudiante(String nombreEstudiante) {
		this.nombreEstudiante = nombreEstudiante;
	}

	public Date getFechaEstudiante() {
		return fechaEstudiante;
	}

	public void setFechaEstudiante(Date fechaEstudiante) {
		this.fechaEstudiante = fechaEstudiante;
	}

	public String getFehcaString() {
		return fehcaString;
	}

	public void setFehcaString(String fehcaString) {
		this.fehcaString = fehcaString;
	}

	public Apoderado getApoderado() {
		return apoderado;
	}

	public void setApoderado(Apoderado apoderado) {
		this.apoderado = apoderado;
	}

	public static long getSerialversionuid() {
		return serialVersionUID;
	}

	
}
