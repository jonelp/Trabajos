package pe.edu.upc.service;

import java.util.List;

import pe.edu.upc.entity.Detalle;

public interface IDetalleSERVICE {
	
	
	void insertar(Detalle detalle);
	
	void modificar (Detalle detalle);
	
	void eliminar (int idDetalle);
	
	Detalle listarId (int idDetalle);
	
	List<Detalle> listar ();
	
	List<Detalle> findBydescripcionMatricula(String descripcionMatricula );
	
	List<Detalle> findBynombreEstudiante(String nombreEstudiante);
	
	List<Detalle> findBynombreTaller(String nombreTaller);

}
