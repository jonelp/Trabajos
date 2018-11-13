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

import org.hibernate.validator.constraints.NotBlank;
import org.hibernate.validator.constraints.NotEmpty;


@Entity
@Table (name = "detalle")
public class Detalle implements Serializable{
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int idDetalle;
	
	@NotEmpty(message="No puede estar vacío")
	@NotBlank(message="No puede estar en blanco")
	@Column(name = "descripcionMatricula" , length = 50 , nullable = false)
	private String descripcionMatricula;
	
	
	@Column(name = "montoMatricula",length = 5, nullable = false)
	private double montoMatricula;
	
	@ManyToOne
	@JoinColumn(name = "idTaller", nullable = false)
	private Taller taller;

	
	@ManyToOne
	@JoinColumn(name = "idMatricula" , nullable = false)
	private Matricula matricula;


	public Detalle() {
		super();
	}


	public Detalle(int idDetalle, String descripcionMatricula, double montoMatricula, Taller taller,
			Matricula matricula) {
		super();
		this.idDetalle = idDetalle;
		this.descripcionMatricula = descripcionMatricula;
		this.montoMatricula = montoMatricula;
		this.taller = taller;
		this.matricula = matricula;
	}


	public int getIdDetalle() {
		return idDetalle;
	}


	public void setIdDetalle(int idDetalle) {
		this.idDetalle = idDetalle;
	}


	public String getDescripcionMatricula() {
		return descripcionMatricula;
	}


	public void setDescripcionMatricula(String descripcionMatricula) {
		this.descripcionMatricula = descripcionMatricula;
	}


	public double getMontoMatricula() {
		return montoMatricula;
	}


	public void setMontoMatricula(double montoMatricula) {
		this.montoMatricula = montoMatricula;
	}


	public Taller getTaller() {
		return taller;
	}


	public void setTaller(Taller taller) {
		this.taller = taller;
	}


	public Matricula getMatricula() {
		return matricula;
	}


	public void setMatricula(Matricula matricula) {
		this.matricula = matricula;
	}


	public static long getSerialversionuid() {
		return serialVersionUID;
	}
	
	

	
	

}
