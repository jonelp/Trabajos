package pe.edu.upc.entity;

import java.io.Serializable;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Table;
import javax.validation.constraints.Size;

import org.hibernate.validator.constraints.NotBlank;
import org.hibernate.validator.constraints.NotEmpty;
import org.hibernate.validator.constraints.Range;

@Entity
@Table(name = "profesor")
public class Profesor implements Serializable{
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	//ATRIBUTOS
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int idProfesor;
	
	@NotEmpty(message="No puede estar vacío")
	@NotBlank(message="No puede estar en blanco")
	@Column(name = "nombreProfesor",length = 30 , nullable = false)
	private String nombreProfesor;
	

	@Column(name = "sueldoProfesor",length = 5 , nullable = false)
	private double sueldoProfesor;


	public Profesor() {
		super();
	}


	public Profesor(int idProfesor, String nombreProfesor, double sueldoProfesor) {
		super();
		this.idProfesor = idProfesor;
		this.nombreProfesor = nombreProfesor;
		this.sueldoProfesor = sueldoProfesor;
	}


	public int getIdProfesor() {
		return idProfesor;
	}


	public void setIdProfesor(int idProfesor) {
		this.idProfesor = idProfesor;
	}


	public String getNombreProfesor() {
		return nombreProfesor;
	}


	public void setNombreProfesor(String nombreProfesor) {
		this.nombreProfesor = nombreProfesor;
	}


	public double getSueldoProfesor() {
		return sueldoProfesor;
	}


	public void setSueldoProfesor(double sueldoProfesor) {
		this.sueldoProfesor = sueldoProfesor;
	}


	public static long getSerialversionuid() {
		return serialVersionUID;
	}


	//CONSTRUCTORES
	
	
	
	
	

	
	
	

}
