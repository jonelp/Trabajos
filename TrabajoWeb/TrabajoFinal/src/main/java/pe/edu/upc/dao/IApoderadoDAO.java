package pe.edu.upc.dao;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import pe.edu.upc.entity.Apoderado;

@Repository
public interface IApoderadoDAO extends JpaRepository<Apoderado, Integer> {

}
