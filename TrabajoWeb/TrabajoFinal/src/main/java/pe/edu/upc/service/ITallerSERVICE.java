package pe.edu.upc.service;

import java.util.List;

import pe.edu.upc.entity.Taller;

public interface ITallerSERVICE {

	void insertar (Taller taller);
	
	void modificar (Taller taller);
	
	void eliminar (int idTaller);
	
	Taller listarId (int idTaller);
	
	List<Taller> listar ();
	
	List<Taller> findBynombreTaller(String nombreTaller);
	
	List<Taller> findBynombreProfesor(String nombreProfesor);
	
	List<Taller> findBynombreSalon(String nombreSalon);
}
