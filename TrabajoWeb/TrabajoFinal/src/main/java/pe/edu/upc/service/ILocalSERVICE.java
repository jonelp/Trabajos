package pe.edu.upc.service;

import java.util.List;

import pe.edu.upc.entity.Local;

public interface ILocalSERVICE {

	void insertar (Local local);

	void modificar (Local local);
	
	void eliminar (int idLocal);
	
	Local listarId (int idLocal);
	
	List<Local> listar ();
}
