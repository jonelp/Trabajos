package pe.edu.upc.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import pe.edu.upc.dao.IApoderadoDAO;
import pe.edu.upc.entity.Apoderado;

@Service
public class IApoderadoSERVICEimpl implements IApoderadoSERVICE{

	@Autowired
	private IApoderadoDAO dApoderado;

	@Override
	public void insertar(Apoderado apoderado) {
		dApoderado.save(apoderado);
	
	}

	@Override
	public void modificar(Apoderado apoderado) {
		dApoderado.save(apoderado);		
	}

	@Override
	public void eliminar(int idApoderado) {
		dApoderado.delete(idApoderado);		
	}

	@Override
	public Apoderado listarId(int idApoderado) {
		return dApoderado.findOne(idApoderado);
	}

	@Override
	public List<Apoderado> listar() {
		return dApoderado.findAll();
	}
	
	
}
