package pe.edu.upc.entity;

import java.io.Serializable;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;
import javax.validation.constraints.Size;

import org.hibernate.validator.constraints.NotBlank;
import org.hibernate.validator.constraints.NotEmpty;
import org.hibernate.validator.constraints.Range;

@Entity
@Table(name = "taller")
public class Taller implements Serializable{
		
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	
	//ATRIBUTOS

	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int idTaller;
	
	@NotEmpty(message="No puede estar vacío")
	@NotBlank(message="No puede estar en blanco")
	@Column(name = "nombreTaller", length = 20 ,nullable = false)
	private String nombreTaller;
	
	
	@NotEmpty(message="No puede estar vacío")
	@NotBlank(message="No puede estar en blanco")
	@Column(name = "descripcionTaller" ,length = 50 , nullable = false)
	private String descripcionTaller;
	
	
	@Size(min=1,max=2,message="Debe tener 2 cifras")
	@Range(min=0,max=99,message="Debe ser numero")
	@Column(name = "capacidadTaller" ,length = 2 , nullable = false)
	private String capacidadTaller;
	
	
	@Size(min=2,max=4,message="Debe tener 4 cifras")
	@Range(min=0,max=9999,message="Debe ser numero")
	@Column (name = "horaTaller", length = 4, nullable = false)	
	private String horaTaller;
	
	@ManyToOne
	@JoinColumn (name = "idSalon", nullable = false)
	private Salon salon;
	
	@ManyToOne
	@JoinColumn(name = "idProfesor" , nullable = false)
	private Profesor profesor;

	
	
	//CONSTRUCTORES 
	
	public Taller() {
		super();
	}

	public Taller(int idTaller, String nombreTaller, String descripcionTaller, String capacidadTaller,
			String horaTaller, Salon salon, Profesor profesor) {
		super();
		this.idTaller = idTaller;
		this.nombreTaller = nombreTaller;
		this.descripcionTaller = descripcionTaller;
		this.capacidadTaller = capacidadTaller;
		this.horaTaller = horaTaller;
		this.salon = salon;
		this.profesor = profesor;
	}

	public int getIdTaller() {
		return idTaller;
	}
		
	public void setIdTaller(int idTaller) {
		this.idTaller = idTaller;
	}

	public String getNombreTaller() {
		return nombreTaller;
	}

	public void setNombreTaller(String nombreTaller) {
		this.nombreTaller = nombreTaller;
	}

	public String getDescripcionTaller() {
		return descripcionTaller;
	}

	public void setDescripcionTaller(String descripcionTaller) {
		this.descripcionTaller = descripcionTaller;
	}

	public String getCapacidadTaller() {
		return capacidadTaller;
	}

	public void setCapacidadTaller(String capacidadTaller) {
		this.capacidadTaller = capacidadTaller;
	}

	public String getHoraTaller() {
		return horaTaller;
	}

	public void setHoraTaller(String horaTaller) {
		this.horaTaller = horaTaller;
	}

	public Salon getSalon() {
		return salon;
	}

	public void setSalon(Salon salon) {
		this.salon = salon;
	}

	public Profesor getProfesor() {
		return profesor;
	}

	public void setProfesor(Profesor profesor) {
		this.profesor = profesor;
	}

	public static long getSerialversionuid() {
		return serialVersionUID;
	}

	

	
	
	
	
	

	
	
	
	
	

}
