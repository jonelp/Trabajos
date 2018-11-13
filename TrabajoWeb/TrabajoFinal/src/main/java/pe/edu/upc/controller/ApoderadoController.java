package pe.edu.upc.controller;

import java.text.ParseException;
import java.util.Map;

import javax.validation.Valid;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.access.annotation.Secured;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;

import pe.edu.upc.entity.Apoderado;
import pe.edu.upc.service.IApoderadoSERVICE;

@Controller
@RequestMapping("/apoderado")

public class ApoderadoController {
	
	@Autowired
	private IApoderadoSERVICE aService;
	
	

	@RequestMapping("/irRegistrar")
	public String irRegistrar(Model model) {
		model.addAttribute("apoderado", new Apoderado());
		return "apoderado";
	}

	@RequestMapping("/registrar")
	public String registrar(Map<String, Object> model, @ModelAttribute @Valid Apoderado apoderado, BindingResult binRes)
			throws ParseException {
		if (binRes.hasErrors()) {
			return "apoderado";
		} else {
			if (apoderado.getIdApoderado()> 0) {
				aService.modificar(apoderado);
			} else {
				aService.insertar(apoderado);
			}
			model.put("listaAPODERADO", aService.listar());
			model.put("Mensaje", "Error!!");
			return "listApoderado";
		}
	}

	@RequestMapping("/modificar")
	public String modificar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		Apoderado apo = aService.listarId(id);
		model.put("apoderado", apo);
		return "apoderado";
	}

	@RequestMapping("/eliminar")
	public String eliminar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		try {
			if (id != null && id > 0) {
				aService.eliminar(id);
				model.put("listaAPODERADO", aService.listar());
			}
		} catch (Exception e) {
			System.out.println(e.getMessage());
			model.put("Error","asociada");
			model.put("listaAPODERADO", aService.listar());

		}
		return "listApoderado";
	}

	@RequestMapping("/listar")
	public String listar(Map<String, Object> model) {

		model.put("listaAPODERADO", aService.listar());
		return "listApoderado";
	}


}
