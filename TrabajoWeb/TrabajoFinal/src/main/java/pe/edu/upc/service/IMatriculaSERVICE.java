package pe.edu.upc.service;

import java.util.List;

import pe.edu.upc.entity.Matricula;

public interface IMatriculaSERVICE {

	void insertar (Matricula  matricula);

	void modificar (Matricula matricula);
	
	void eliminar (int idMatricula);
	
	Matricula listarId (int idMatricula);
	
	List<Matricula> listar ();
	
	/*List<Matricula> findBydescripcionMatricula(String descripcionMatricula);
	
	List<Matricula> findBynombreEstudiante(String nombreEstudiante);*/
}
