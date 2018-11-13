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
@Table(name = "salon")
public class Salon implements Serializable{
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;


	//ATRIBUTOS
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int idSalon;
	
	
	@NotEmpty(message="No puede estar vacío")
	@NotBlank(message="No puede estar en blanco")
	@Column(name = "nombreSalon" , length = 20,nullable = false)
	private String nombreSalon;
	
	@ManyToOne
	@JoinColumn (name = "idLocal", nullable= false)
	private Local local;

	
	//CONSTRUCTORES
	
	public Salon() {
		super();
	}

	public Salon(int idSalon, String nombreSalon, Local local) {
		super();
		this.idSalon = idSalon;
		this.nombreSalon = nombreSalon;
		this.local = local;
	}

	public int getIdSalon() {
		return idSalon;
	}

	public void setIdSalon(int idSalon) {
		this.idSalon = idSalon;
	}

	public String getNombreSalon() {
		return nombreSalon;
	}

	public void setNombreSalon(String nombreSalon) {
		this.nombreSalon = nombreSalon;
	}

	public Local getLocal() {
		return local;
	}

	public void setLocal(Local local) {
		this.local = local;
	}

	public static long getSerialversionuid() {
		return serialVersionUID;
	}
	
	

}
