package pe.edu.upc.controller;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.List;
import java.util.Map;

import javax.validation.Valid;

import org.apache.commons.lang.StringUtils;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;

import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;

import pe.edu.upc.entity.Estudiante;
import pe.edu.upc.service.IApoderadoSERVICE;
import pe.edu.upc.service.IEstudianteSERVICE;

@Controller
@RequestMapping("/estudiante")
public class EstudianteController {
	
	@Autowired
	private IEstudianteSERVICE eService;
	
	@Autowired
	private IApoderadoSERVICE aService;
	
	/*@RequestMapping("/")
	public String irEstudiante(Map<String, Object> model) {
		model.put("listaESTUDIANTE", eService.listar());
		return "listEstudiante";
	}*/

	@RequestMapping("/irRegistrar")
	public String irRegistrar(Model model) {
		model.addAttribute("estudiante", new Estudiante());
		model.addAttribute("listaAPODERADO", aService.listar());

		return "estudiante";
	}

	@RequestMapping("/registrar")
	public String registrar(Model model, @ModelAttribute @Valid Estudiante estudiante, BindingResult binRes)
			throws ParseException {
		if (binRes.hasErrors()) {
			return "estudiante";
		} else {

			if (estudiante.getIdEstudiante() > 0) {
				eService.modificar(estudiante);
			} else {
				eService.insertar(estudiante);
			}
			model.addAttribute("listaAPODERADO", aService.listar());
			return "redirect:/estudiante/listar";

		}
	}

	@RequestMapping("/modificar")
	public String modificar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		Estudiante est = eService.listarId(id);
		
		SimpleDateFormat fec = new SimpleDateFormat("dd/MM/yyyy");
		est.setFehcaString(fec.format(est.getFechaEstudiante()));
		
		model.put("listaAPODERADO", aService.listar());
		model.put("estudiante", est);

		return "estudiante";
	}

	@RequestMapping("/eliminar")
	public String eliminar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		try {
			if (id != null && id > 0) {
				eService.eliminar(id);
				model.put("listaESTUDIANTE", eService.listar());
			}
			
		} catch (Exception e) {
		System.out.println(e.getMessage());
		}
		return "listEstudiante";
	}

	@RequestMapping("/listar")
	public String listar(Map<String, Object> model) {

		model.put("listaESTUDIANTE", eService.listar());
		return "listEstudiante";
	}

	@RequestMapping("/listarId")
	public String listarId(Map<String, Object> model, @ModelAttribute Estudiante estudiante) {
		eService.listarId(estudiante.getIdEstudiante());
		return "listEstudiante";
	}
	
	@RequestMapping("/irBuscar")
	public String irBuscar(Model model) {
		model.addAttribute("estudiante", new Estudiante());
		return "buscarEstudiante";
	}
	
	
	@RequestMapping("/buscar")
	public String buscar(Map<String, Object> model, @ModelAttribute Estudiante estudiante) throws ParseException {
		
		List<Estudiante>listaEstudiante;
		
		if (StringUtils.isNumeric(estudiante.getNombreEstudiante())){

			listaEstudiante = eService.findBynombreEstudiante(estudiante.getNombreEstudiante());

		} 
		else
		{
			estudiante.setNombreEstudiante(estudiante.getNombreEstudiante());
			listaEstudiante = eService.findBynombreEstudiante(estudiante.getNombreEstudiante());

			
			if(listaEstudiante.isEmpty())
			{
				listaEstudiante = eService.findBynombreApoderado(estudiante.getNombreEstudiante());
			}
		}
		if (listaEstudiante.isEmpty()) {

			model.put("mensaje", "No se encontró");
		}
		model.put("listaESTUDIANTE", listaEstudiante);
		return "buscarEstudiante";
		
	}
	
	

}
