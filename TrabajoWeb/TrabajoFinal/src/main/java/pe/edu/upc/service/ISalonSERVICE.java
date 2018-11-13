package pe.edu.upc.service;

import java.util.List;

import pe.edu.upc.entity.Salon;

public interface ISalonSERVICE {

	void insertar (Salon salon);
	
	void modificar (Salon salon);
	
	void eliminar (int idSalon);
	
	Salon listarId (int idSalon);
	
	List<Salon> listar ();
}
