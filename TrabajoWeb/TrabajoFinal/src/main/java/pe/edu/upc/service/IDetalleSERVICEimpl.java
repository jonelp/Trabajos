package pe.edu.upc.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import pe.edu.upc.dao.IDetalleDAO;
import pe.edu.upc.entity.Detalle;

@Service
public class IDetalleSERVICEimpl implements IDetalleSERVICE {
	
	@Autowired
	private IDetalleDAO dDetalle;

	@Override
	public void insertar(Detalle detalle) {
		dDetalle.save(detalle);
		
	}

	@Override
	public void modificar(Detalle detalle) {
		dDetalle.save(detalle);		
	}

	@Override
	public void eliminar(int idDetalle) {
		dDetalle.delete(idDetalle);		
	}

	@Override
	public Detalle listarId(int idDetalle) {
		return dDetalle.findOne(idDetalle);
	}

	@Override
	public List<Detalle> listar() {
		return dDetalle.findAll();
	}

	@Override
	public List<Detalle> findBydescripcionMatricula(String descripcionMatricula) {
		return dDetalle.findBydescripcionMatricula(descripcionMatricula);
	}

	@Override
	public List<Detalle> findBynombreEstudiante(String nombreEstudiante) {
		return dDetalle.findBynombreEstudiante(nombreEstudiante);
	}

	@Override
	public List<Detalle> findBynombreTaller(String nombreTaller) {
		return dDetalle.findBynombreTaller(nombreTaller);
	}

}
