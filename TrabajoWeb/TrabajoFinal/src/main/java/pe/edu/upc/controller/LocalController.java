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

import pe.edu.upc.entity.Local;
import pe.edu.upc.service.ILocalSERVICE;

@Controller
@RequestMapping("/local")
public class LocalController  {
	
	@Autowired
	private ILocalSERVICE lService;
	
	/*@RequestMapping("/")
	public String irLocal(Map<String, Object> model) {
		model.put("listaLOCAL", lService.listar());
		return "listLocal";
	}*/

	@RequestMapping("/irRegistrar")
	public String irRegistrar(Model model) {
		model.addAttribute("local", new Local());
		return "local";
	}

	@RequestMapping("/registrar")
	public String registrar(Map<String, Object> model, @ModelAttribute @Valid Local local, BindingResult binRes)
			throws ParseException {
		if (binRes.hasErrors()) {
			return "local";
		} else {
			if (local.getIdLocal()> 0) {
				lService.modificar(local);
			} else {
				lService.insertar(local);
			}
			model.put("listaLOCAL", lService.listar());
			model.put("Mensaje", "Error!!");
			return "listLocal";
		}
	}

	@RequestMapping("/modificar")
	public String modificar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		Local lo = lService.listarId(id);
		model.put("local", lo);
		return "local";
	}

	@RequestMapping("/eliminar")
	public String eliminar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		try {
			if (id != null && id > 0) {
				lService.eliminar(id);
				model.put("listaLOCAL", lService.listar());
			}
		} catch (Exception e) {
			System.out.println(e.getMessage());
			model.put("Error","asociada");
			model.put("listaLOCAL", lService.listar());

		}
		return "listLocal";
	}

	@RequestMapping("/listar")
	public String listar(Map<String, Object> model) {

		model.put("listaLOCAL", lService.listar());
		return "listLocal";
	}

}
