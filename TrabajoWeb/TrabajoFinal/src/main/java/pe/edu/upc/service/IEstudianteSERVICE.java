package pe.edu.upc.service;

import java.util.List;

import pe.edu.upc.entity.Estudiante;

public interface IEstudianteSERVICE {

	void insertar (Estudiante estudiante);
	
	void modificar (Estudiante estudiante);
	
	void eliminar (int idEstudiante);
	
	Estudiante listarId (int idEstudiante);
	
	List<Estudiante> listar ();
	
	List<Estudiante> findBynombreApoderado(String nombreApoderado);
	
	List<Estudiante> findBynombreEstudiante(String nombreEstudiante);
}
