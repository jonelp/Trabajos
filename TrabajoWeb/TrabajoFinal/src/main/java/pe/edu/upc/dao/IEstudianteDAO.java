package pe.edu.upc.dao;



import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import pe.edu.upc.entity.Estudiante;

@Repository
public interface IEstudianteDAO extends JpaRepository<Estudiante, Integer> {
	
	@Query("from Estudiante e where e.apoderado.nombreApoderado like %:nombreApoderado%")
	List<Estudiante> findBynombreApoderado(@Param("nombreApoderado")String nombreApoderado);
	
	@Query("from Estudiante e where e.nombreEstudiante like %:nombreEstudiante%")
	List<Estudiante> findBynombreEstudiante(@Param("nombreEstudiante")String nombreEstudiante);

}
