package pe.edu.upc.service;

import java.util.List;

import pe.edu.upc.entity.Profesor;


public interface IProfesorSERVICE {

	void insertar (Profesor profesor);

	void modificar (Profesor profesor);
	
	void eliminar (int idProfesor);
	
	Profesor listarId (int idProfesor);
	
	List<Profesor> listar ();
	
	List<Profesor> findBynombreProfesor(String nombreProfesor);
}
