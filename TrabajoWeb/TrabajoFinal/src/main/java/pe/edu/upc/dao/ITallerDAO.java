package pe.edu.upc.dao;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import pe.edu.upc.entity.Taller;

@Repository
public interface ITallerDAO extends JpaRepository<Taller, Integer>{
	
	
	@Query("from Taller t where t.nombreTaller like %:nombreTaller%")
	List<Taller> findBynombreTaller(@Param("nombreTaller")String nombreTaller);
	
	
	@Query("from Taller t where t.profesor.nombreProfesor like %:nombreProfesor%")
	List<Taller> findBynombreProfesor(@Param("nombreProfesor")String nombreProfesor);
	
	
	@Query("from Taller t where t.salon.nombreSalon like %:nombreSalon%")
	List<Taller> findBynombreSalon(@Param("nombreSalon")String nombreSalon);

}
