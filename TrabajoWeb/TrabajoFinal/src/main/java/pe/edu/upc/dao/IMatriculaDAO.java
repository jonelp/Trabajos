package pe.edu.upc.dao;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import pe.edu.upc.entity.Matricula;

@Repository
public interface IMatriculaDAO extends JpaRepository<Matricula, Integer>{
	
	
	/*@Query("from Matricula m where m.descripcionMatricula like %:descripcionMatricula%")
	List<Matricula> findBydescripcionMatricula(@Param("descripcionMatricula")String descripcionMatricula);
	
	@Query("from Matricula m where m.estudiante.nombreEstudiante like %:nombreEstudiante%")
	List<Matricula> finBynombreEstudiante(@Param("nombreEstudiante")String nombreEstudiante);*/

}
