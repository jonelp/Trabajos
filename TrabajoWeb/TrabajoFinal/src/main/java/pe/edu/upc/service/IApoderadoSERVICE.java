package pe.edu.upc.service;

import java.util.List;

import pe.edu.upc.entity.Apoderado;

public interface IApoderadoSERVICE {

	void insertar (Apoderado apoderado);
	
	void modificar (Apoderado apoderado);
	
	void eliminar (int idApoderado);
	
	Apoderado listarId (int idApoderado);
	
	List<Apoderado> listar ();
	
	
}
