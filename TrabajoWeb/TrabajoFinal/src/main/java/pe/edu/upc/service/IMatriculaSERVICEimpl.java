package pe.edu.upc.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import pe.edu.upc.dao.IMatriculaDAO;
import pe.edu.upc.entity.Matricula;

@Service
public class IMatriculaSERVICEimpl implements IMatriculaSERVICE {
	
	@Autowired
	private IMatriculaDAO dMatricula;

	@Override
	public void insertar(Matricula matricula) {
		dMatricula.save(matricula);
		
	}

	@Override
	public void modificar(Matricula matricula) {
		dMatricula.save(matricula);		
	}

	@Override
	public void eliminar(int idMatricula) {
		dMatricula.delete(idMatricula);		
	}

	@Override
	public Matricula listarId(int idMatricula) {
		return dMatricula.findOne(idMatricula);
	}

	@Override
	public List<Matricula> listar() {
		return dMatricula.findAll();
	}

	/*@Override
	public List<Matricula> findBydescripcionMatricula(String descripcionMatricula) {
		return dMatricula.findBydescripcionMatricula(descripcionMatricula);
	}

	@Override
	public List<Matricula> findBynombreEstudiante(String nombreEstudiante) {
		return dMatricula.finBynombreEstudiante(nombreEstudiante);
	}
*/
}
