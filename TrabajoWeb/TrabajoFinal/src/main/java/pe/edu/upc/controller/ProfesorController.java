package pe.edu.upc.controller;

import java.text.ParseException;
import java.util.List;
import java.util.Map;

import javax.validation.Valid;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;

import pe.edu.upc.entity.Profesor;
import pe.edu.upc.service.IProfesorSERVICE;

@Controller
@RequestMapping("/profesor")
public class ProfesorController {
	
	@Autowired
	private IProfesorSERVICE pService;
	
	/*@RequestMapping("/")
	public String irProfesor(Map<String, Object> model) {
		model.put("listaPROFESOR", pService.listar());
		return "listProfesor";
	}*/

	@RequestMapping("/irRegistrar")
	public String irRegistrar(Model model) {
		model.addAttribute("profesor", new Profesor());
		return "profesor";
	}

	@RequestMapping("/registrar")
	public String registrar(Map<String, Object> model, @ModelAttribute @Valid Profesor profesor, BindingResult binRes)
			throws ParseException {
		if (binRes.hasErrors()) {
			return "profesor";
		} else {
			if (profesor.getIdProfesor()> 0) {
				pService.modificar(profesor);
			} else {
				pService.insertar(profesor);
			}
			model.put("listaPROFESOR", pService.listar());
			model.put("Mensaje", "Error!!");
			return "listProfesor";
		}
	}

	@RequestMapping("/modificar")
	public String modificar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		Profesor pro = pService.listarId(id);
		model.put("profesor", pro);
		return "profesor";
	}

	@RequestMapping("/eliminar")
	public String eliminar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		try {
			if (id != null && id > 0) {
				pService.eliminar(id);
				model.put("listaPROFESOR", pService.listar());
			}
		} catch (Exception e) {
			System.out.println(e.getMessage());
			model.put("Error","asociada");
			model.put("listaPROFESOR", pService.listar());

		}
		return "listApoderado";
	}

	@RequestMapping("/listar")
	public String listar(Map<String, Object> model) {

		model.put("listaPROFESOR", pService.listar());
		return "listProfesor";
	}
	
	
	@RequestMapping("/buscar")
	public String buscar(Map<String, Object> model, @ModelAttribute Profesor profesor) throws ParseException {
		List<Profesor> listaProfesor = null;

		profesor.setNombreProfesor(profesor.getNombreProfesor());
		listaProfesor = pService.findBynombreProfesor(profesor.getNombreProfesor());

		if (listaProfesor.isEmpty()) {

			model.put("mensaje", "No se encontró");
		}
		model.put("listaPROFESOR", listaProfesor);
		return "buscarProfesor";
	}

	@RequestMapping("/irBuscar")
	public String irBuscar(Model model) {
		model.addAttribute("profesor", new Profesor());
		return "buscarProfesor";
	}



}
