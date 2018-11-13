package pe.edu.upc.controller;

import java.text.ParseException;
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

import pe.edu.upc.entity.Taller;
import pe.edu.upc.service.IProfesorSERVICE;
import pe.edu.upc.service.ISalonSERVICE;
import pe.edu.upc.service.ITallerSERVICE;

@Controller
@RequestMapping("/taller")
public class TallerController {

	@Autowired
	private ITallerSERVICE tService;
	
	@Autowired
	private IProfesorSERVICE pService;
	
	@Autowired
	private ISalonSERVICE sService;
	
	
	
	/*@RequestMapping("/")
	public String irTaller(Map<String, Object> model) {
		model.put("listaTALLER", tService.listar());
		return "listTaller";
	}*/

	@RequestMapping("/irRegistrar")
	public String irRegistrar(Model model) {
		model.addAttribute("taller", new Taller());
		model.addAttribute("listaPROFESOR", pService.listar());
		model.addAttribute("listaSALON", sService.listar());

		return "taller";
	}

	@RequestMapping("/registrar")
	public String registrar(Model model, @ModelAttribute @Valid Taller taller, BindingResult binRes)
			throws ParseException {
		if (binRes.hasErrors()) {
			return "taller";
		} else {

			if (taller.getIdTaller() > 0) {
				tService.modificar(taller);
			} else {
				tService.insertar(taller);
			}
			model.addAttribute("listaPROFESOR", pService.listar());
			model.addAttribute("listaSALON", sService.listar());
			return "redirect:/taller/listar";

		}
	}

	@RequestMapping("/modificar")
	public String modificar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		Taller tal = tService.listarId(id);
		model.put("listaPROFESOR", pService.listar());
		model.put("listaSALON", sService.listar());
		model.put("taller", tal);

		return "taller";
	}

	@RequestMapping("/eliminar")
	public String eliminar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		try {
			if (id != null && id > 0) {
				tService.eliminar(id);
				model.put("listaTALLER", tService.listar());
			}
			
		} catch (Exception e) {
		System.out.println(e.getMessage());
		}
		return "listTaller";
	}

	@RequestMapping("/listar")
	public String listar(Map<String, Object> model) {

		model.put("listaTALLER", tService.listar());
		return "listTaller";
	}

	@RequestMapping("/listarId")
	public String listarId(Map<String, Object> model, @ModelAttribute Taller taller) {
		tService.listarId(taller.getIdTaller());
		return "listTaller";
	}
	
	
	@RequestMapping("/irBuscar")
	public String irBuscar(Model model) {
		model.addAttribute("taller", new Taller());
		return "buscarTaller";
	}
	
	
	@RequestMapping("/buscar")
	public String buscar(Map<String, Object> model, @ModelAttribute Taller taller) throws ParseException {
		
		List<Taller>listaTaller;
		
		if (StringUtils.isNumeric(taller.getNombreTaller())){

			listaTaller = tService.findBynombreTaller(taller.getNombreTaller());

		} 
		else
		{
			taller.setNombreTaller(taller.getNombreTaller());
			listaTaller = tService.findBynombreTaller(taller.getNombreTaller());

			
			if(listaTaller.isEmpty())
			{
				listaTaller = tService.findBynombreProfesor(taller.getNombreTaller());
			}
			
			if(listaTaller.isEmpty())
			{
				listaTaller = tService.findBynombreSalon(taller.getNombreTaller());
			}
		}
		if (listaTaller.isEmpty()) {

			model.put("mensaje", "No se encontró");
		}
		model.put("listaTALLER", listaTaller);
		return "buscarTaller";
		
	}
	
	
	
	
	
}
