package pe.edu.upc.dao;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import pe.edu.upc.entity.Salon;

@Repository
public interface ISalonDAO extends JpaRepository<Salon, Integer>{

}
