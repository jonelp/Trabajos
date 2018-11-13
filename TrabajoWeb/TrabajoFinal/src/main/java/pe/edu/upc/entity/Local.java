package pe.edu.upc.entity;

import java.io.Serializable;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Table;

import org.hibernate.validator.constraints.NotBlank;
import org.hibernate.validator.constraints.NotEmpty;

@Entity
@Table(name ="local")
public class Local implements Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	//ATRIBUTOS
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int idLocal;
	
	@NotEmpty(message="No puede estar vacío")
	@NotBlank(message="No puede estar en blanco")
	@Column(name = "nombreLocal" ,length = 20 ,nullable = false)
	private String nombreLocal;
	
	@NotEmpty(message="No puede estar vacío")
	@NotBlank(message="No puede estar en blanco")
	@Column(name = "direccionLocal",length = 40, nullable = false)
	private String direccionLocal;
	
	
	//CONSTRUCTORES
	
	public Local() {
		super();
	}

	public Local(int idLocal, String nombreLocal, String direccionLocal) {
		super();
		this.idLocal = idLocal;
		this.nombreLocal = nombreLocal;
		this.direccionLocal = direccionLocal;
	}

	public int getIdLocal() {
		return idLocal;
	}

	public void setIdLocal(int idLocal) {
		this.idLocal = idLocal;
	}

	public String getNombreLocal() {
		return nombreLocal;
	}

	public void setNombreLocal(String nombreLocal) {
		this.nombreLocal = nombreLocal;
	}

	public String getDireccionLocal() {
		return direccionLocal;
	}

	public void setDireccionLocal(String direccionLocal) {
		this.direccionLocal = direccionLocal;
	}

	public static long getSerialversionuid() {
		return serialVersionUID;
	}
	
	
	
}
