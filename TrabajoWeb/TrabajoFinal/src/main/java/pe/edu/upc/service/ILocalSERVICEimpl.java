package pe.edu.upc.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import pe.edu.upc.dao.ILocalDAO;
import pe.edu.upc.entity.Local;

@Service
public class ILocalSERVICEimpl implements ILocalSERVICE{
	
	@Autowired
	private ILocalDAO dLocal;

	@Override
	public void insertar(Local local) {
		dLocal.save(local);
		
	}

	@Override
	public void modificar(Local local) {
		dLocal.save(local);		
	}

	@Override
	public void eliminar(int idLocal) {
		dLocal.delete(idLocal);		
	}

	@Override
	public Local listarId(int idLocal) {
		return dLocal.findOne(idLocal);
	}

	@Override
	public List<Local> listar() {
		return dLocal.findAll();
	}

}
