package pe.edu.upc.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import pe.edu.upc.dao.ISalonDAO;
import pe.edu.upc.entity.Salon;

@Service
public class ISalonSERVICEimpl implements ISalonSERVICE {
	
	@Autowired
	private ISalonDAO dSalon;

	@Override
	public void insertar(Salon salon) {
		dSalon.save(salon);
		
	}

	@Override
	public void modificar(Salon salon) {
		dSalon.save(salon);		
	}

	@Override
	public void eliminar(int idSalon) {
		dSalon.delete(idSalon);		
	}

	@Override
	public Salon listarId(int idSalon) {
		return dSalon.findOne(idSalon);
	}

	@Override
	public List<Salon> listar() {
		return dSalon.findAll();
	}
	

}
