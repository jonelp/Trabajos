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

import pe.edu.upc.entity.Detalle;
import pe.edu.upc.service.IDetalleSERVICE;
import pe.edu.upc.service.IMatriculaSERVICE;
import pe.edu.upc.service.ITallerSERVICE;

@Controller
@RequestMapping("/detalle")
public class DetalleController {
	
	@Autowired
	private IDetalleSERVICE dService;
	
	@Autowired
	private IMatriculaSERVICE mService;
	
	@Autowired 
	private ITallerSERVICE tService;
	
	/*@RequestMapping("/")
	public String irDetalle(Map<String, Object> model) {
		model.put("listaDETALLE", dService.listar());
		return "listDetalle";
	}*/
	
	
	@RequestMapping("/irRegistrar")
	public String irRegistrar(Model model) {
		model.addAttribute("detalle", new Detalle());
		model.addAttribute("listaMATRICULA", mService.listar());
		model.addAttribute("listaTALLER", tService.listar());

		return "detalle";
	}
	
	@RequestMapping("/registrar")
	public String registrar(Model model, @ModelAttribute @Valid Detalle detalle, BindingResult binRes)
			throws ParseException {
		if (binRes.hasErrors()) {
			return "detalle";
		} else {

			if (detalle.getIdDetalle() > 0) {
				dService.modificar(detalle);
			} else {
				dService.insertar(detalle);
			}
			model.addAttribute("listaMATRICULA", mService.listar());
			model.addAttribute("listaTALLER", tService.listar());
			return "redirect:/detalle/listar";

		}
	}

	@RequestMapping("/modificar")
	public String modificar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		Detalle de = dService.listarId(id);
		model.put("listaMATRICULA", mService.listar());
		model.put("listaTALLER", tService.listar());
		model.put("detalle", de);

		return "detalle";
	}
	
	
	@RequestMapping("/eliminar")
	public String eliminar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		try {
			if (id != null && id > 0) {
				dService.eliminar(id);
				model.put("listaDETALLE", dService.listar());
			}
			
		} catch (Exception e) {
		System.out.println(e.getMessage());
		}
		return "listDetalle";
	}

	@RequestMapping("/listar")
	public String listar(Map<String, Object> model) {

		model.put("listaDETALLE", dService.listar());
		return "listDetalle";
	}

	@RequestMapping("/listarId")
	public String listarId(Map<String, Object> model, @ModelAttribute Detalle detalle) {
		dService.listarId(detalle.getIdDetalle());
		return "listDetalle";
	}
	
	@RequestMapping("/irBuscar")
	public String irBuscar(Model model) {
		model.addAttribute("detalle", new Detalle());
		return "buscarDetalle";
	}
	
	
	@RequestMapping("/buscar")
	public String buscar(Map<String, Object> model, @ModelAttribute Detalle detalle) throws ParseException {
		
		List<Detalle>listaDETALLE;
		
		if (StringUtils.isNumeric(detalle.getDescripcionMatricula())){

			listaDETALLE = dService.findBydescripcionMatricula(detalle.getDescripcionMatricula());

		} 
		else
		{
			detalle.setDescripcionMatricula(detalle.getDescripcionMatricula());
			listaDETALLE = dService.findBydescripcionMatricula(detalle.getDescripcionMatricula());

			
			if(listaDETALLE.isEmpty())
			{
				listaDETALLE = dService.findBynombreEstudiante(detalle.getDescripcionMatricula());
			}
			
			if(listaDETALLE.isEmpty())
			{
				listaDETALLE = dService.findBynombreTaller(detalle.getDescripcionMatricula());
			}
		}
		if (listaDETALLE.isEmpty()) {

			model.put("mensaje", "No se encontró");
		}
		model.put("listaDETALLE", listaDETALLE);
		return "buscarDetalle";
		
	}
	
	

}
