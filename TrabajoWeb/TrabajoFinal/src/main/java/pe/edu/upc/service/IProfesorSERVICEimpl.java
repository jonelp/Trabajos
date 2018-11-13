package pe.edu.upc.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import pe.edu.upc.dao.IProfesorDAO;
import pe.edu.upc.entity.Profesor;

@Service
public class IProfesorSERVICEimpl implements IProfesorSERVICE{
	
	@Autowired
	private IProfesorDAO dProfesor;

	@Override
	public void insertar(Profesor profesor) {
		dProfesor.save(profesor);
		
	}

	@Override
	public void modificar(Profesor profesor) {
		dProfesor.save(profesor);		
	}

	@Override
	public void eliminar(int idProfesor) {
		dProfesor.delete(idProfesor);		
	}

	@Override
	public Profesor listarId(int idProfesor) {
		return dProfesor.findOne(idProfesor);
	}

	@Override
	public List<Profesor> listar() {
		return dProfesor.findAll();
	}

	@Override
	public List<Profesor> findBynombreProfesor(String nombreProfesor) {
		return dProfesor.findBynombreProfesor(nombreProfesor);
	}

}
