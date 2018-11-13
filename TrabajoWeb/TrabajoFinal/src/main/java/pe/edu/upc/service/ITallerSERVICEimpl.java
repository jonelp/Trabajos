package pe.edu.upc.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import pe.edu.upc.dao.ITallerDAO;
import pe.edu.upc.entity.Taller;

@Service
public class ITallerSERVICEimpl implements ITallerSERVICE{
	
	@Autowired
	private ITallerDAO dTaller;

	@Override
	public void insertar(Taller taller) {
		dTaller.save(taller);
		
	}

	@Override
	public void modificar(Taller taller) {
		dTaller.save(taller);		
	}

	@Override
	public void eliminar(int idTaller) {
		dTaller.delete(idTaller);		
	}

	@Override
	public Taller listarId(int idTaller) {
		return dTaller.findOne(idTaller);
	}

	@Override
	public List<Taller> listar() {
		return dTaller.findAll();
	}

	@Override
	public List<Taller> findBynombreTaller(String nombreTaller) {
		return dTaller.findBynombreTaller(nombreTaller);
	}

	@Override
	public List<Taller> findBynombreProfesor(String nombreProfesor) {
		return dTaller.findBynombreProfesor(nombreProfesor);
	}

	@Override
	public List<Taller> findBynombreSalon(String nombreSalon) {
		return dTaller.findBynombreSalon(nombreSalon);
	}

}
