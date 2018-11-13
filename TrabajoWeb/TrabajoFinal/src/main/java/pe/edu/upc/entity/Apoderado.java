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
@Table(name = "apoderado")
public class Apoderado implements Serializable	{
	
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	
	//ATRIBUTOS
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int idApoderado;
	
	@NotEmpty(message="No puede estar vacío")
	@NotBlank(message="No puede estar en blanco")
	@Column(name = "nombreApoderado", length = 30, nullable = false)
	private String nombreApoderado;
	
	@NotEmpty(message="No puede estar vacío")
	@NotBlank(message="No puede estar en blanco")
	@Column(name = "direccionApoderado", length = 40, nullable = false)
	private String direccionApoderado;
	
	@Size(min=9,max=9,message="Debe tener 9 cifras")
	@Range(min=0,max=999999999,message="Debe ser numero")
	@Column(name = "numeroApoderado", length = 9, nullable = false)
	private String numeroApoderado;
	
	
	
	//CONSTRUCTORES

	public Apoderado() {
		super();
	}

	public Apoderado(int idApoderado, String nombreApoderado, String direccionApoderado, String numeroApoderado) {
		super();
		this.idApoderado = idApoderado;
		this.nombreApoderado = nombreApoderado;
		this.direccionApoderado = direccionApoderado;
		this.numeroApoderado = numeroApoderado;
	}

	public int getIdApoderado() {
		return idApoderado;
	}

	public void setIdApoderado(int idApoderado) {
		this.idApoderado = idApoderado;
	}

	public String getNombreApoderado() {
		return nombreApoderado;
	}

	public void setNombreApoderado(String nombreApoderado) {
		this.nombreApoderado = nombreApoderado;
	}

	public String getDireccionApoderado() {
		return direccionApoderado;
	}

	public void setDireccionApoderado(String direccionApoderado) {
		this.direccionApoderado = direccionApoderado;
	}

	public String getNumeroApoderado() {
		return numeroApoderado;
	}

	public void setNumeroApoderado(String numeroApoderado) {
		this.numeroApoderado = numeroApoderado;
	}

	public static long getSerialversionuid() {
		return serialVersionUID;
	}

	


}
