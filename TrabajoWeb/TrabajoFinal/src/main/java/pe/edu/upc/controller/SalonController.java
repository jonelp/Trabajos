package pe.edu.upc.controller;

import java.text.ParseException;
import java.util.Map;

import javax.validation.Valid;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;


import pe.edu.upc.entity.Salon;
import pe.edu.upc.service.ILocalSERVICE;
import pe.edu.upc.service.ISalonSERVICE;

@Controller
@RequestMapping("/salon")
public class SalonController {

	@Autowired
	private ISalonSERVICE sService;
	
	@Autowired
	private ILocalSERVICE lService;
	
	/*@RequestMapping("/")
	public String irSalon(Map<String, Object> model) {
		model.put("listaSALON", sService.listar());
		return "listSalon";
	}*/

	@RequestMapping("/irRegistrar")
	public String irRegistrar(Model model) {
		model.addAttribute("salon", new Salon());
		model.addAttribute("listaLOCAL", lService.listar());

		return "salon";
	}

	@RequestMapping("/registrar")
	public String registrar(Model model, @ModelAttribute @Valid Salon salon, BindingResult binRes)
			throws ParseException {
		if (binRes.hasErrors()) {
			return "salon";
		} else {

			if (salon.getIdSalon() > 0) {
				sService.modificar(salon);
			} else {
				sService.insertar(salon);
			}
			model.addAttribute("listaLOCAL", lService.listar());
			return "redirect:/salon/listar";

		}
	}

	@RequestMapping("/modificar")
	public String modificar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		Salon sa = sService.listarId(id);
		model.put("listaLOCAL", lService.listar());
		model.put("salon", sa);

		return "salon";
	}

	@RequestMapping("/eliminar")
	public String eliminar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		try {
			if (id != null && id > 0) {
				sService.eliminar(id);
				model.put("listaSALON", sService.listar());
			}
			
		} catch (Exception e) {
		System.out.println(e.getMessage());
		}
		return "listSalon";
	}

	@RequestMapping("/listar")
	public String listar(Map<String, Object> model) {

		model.put("listaSALON", sService.listar());
		return "listSalon";
	}

	@RequestMapping("/listarId")
	public String listarId(Map<String, Object> model, @ModelAttribute Salon salon) {
		sService.listarId(salon.getIdSalon());
		return "listSalon";
	}

	
}
