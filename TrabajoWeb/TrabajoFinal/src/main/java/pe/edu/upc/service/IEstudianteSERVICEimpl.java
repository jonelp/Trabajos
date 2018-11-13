package pe.edu.upc.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import pe.edu.upc.dao.IEstudianteDAO;
import pe.edu.upc.entity.Estudiante;

@Service
public class IEstudianteSERVICEimpl implements IEstudianteSERVICE {

	@Autowired
	private IEstudianteDAO dEstudiante;

	@Override
	public void insertar(Estudiante estudiante) {
		dEstudiante.save(estudiante);
	}

	@Override
	public void modificar(Estudiante estudiante) {
		dEstudiante.save(estudiante);		
	}

	@Override
	public void eliminar(int idEstudiante) {
		dEstudiante.delete(idEstudiante);		
	}

	@Override
	public Estudiante listarId(int idEstudiante) {
		return dEstudiante.findOne(idEstudiante);
	}

	@Override
	public List<Estudiante> listar() {
		return dEstudiante.findAll();
	}

	@Override
	public List<Estudiante> findBynombreApoderado(String nombreApoderado) {
		return dEstudiante.findBynombreApoderado(nombreApoderado);
	}

	@Override
	public List<Estudiante> findBynombreEstudiante(String nombreEstudiante) {
		return dEstudiante.findBynombreEstudiante(nombreEstudiante);
	}
}
