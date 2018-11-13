package pe.edu.upc.dao;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import pe.edu.upc.entity.Detalle;

@Repository
public interface IDetalleDAO extends JpaRepository<Detalle, Integer> {
	
	@Query("from Detalle d where d.descripcionMatricula like %:descripcionMatricula%")
	List<Detalle> findBydescripcionMatricula(@Param("descripcionMatricula")String descripcionMatricula);
	
	@Query("from Detalle d where d.matricula.estudiante.nombreEstudiante like %:nombreEstudiante%")
	List<Detalle> findBynombreEstudiante(@Param("nombreEstudiante")String nombreEstudiante);
	
	@Query("from Detalle d where d.taller.nombreTaller like %:nombreTaller%")
	List<Detalle> findBynombreTaller(@Param("nombreTaller")String nombreTaller);

}
