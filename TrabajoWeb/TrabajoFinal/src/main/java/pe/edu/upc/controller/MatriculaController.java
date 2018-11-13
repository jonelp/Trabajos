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

import pe.edu.upc.entity.Matricula;
import pe.edu.upc.service.IEstudianteSERVICE;
import pe.edu.upc.service.IMatriculaSERVICE;
import pe.edu.upc.service.ITallerSERVICE;

@Controller
@RequestMapping("/matricula")
public class MatriculaController {
	
	@Autowired
	private IEstudianteSERVICE eService;
	
	@Autowired
	private ITallerSERVICE tService;
	
	@Autowired
	private IMatriculaSERVICE mService;
	
	/*@RequestMapping("/")
	public String irMatricula(Map<String, Object> model) {
		model.put("listaMATRICULA", mService.listar());
		return "listMatricula";
	}*/
	

	@RequestMapping("/irRegistrar")
	public String irRegistrar(Model model) {
		model.addAttribute("matricula", new Matricula());
		model.addAttribute("listaESTUDIANTE", eService.listar());

		return "matricula";
	}

	@RequestMapping("/registrar")
	public String registrar(Model model, @ModelAttribute @Valid Matricula matricula, BindingResult binRes)
			throws ParseException {
		if (binRes.hasErrors()) {
			return "matricula";
		} else {

			if (matricula.getIdMatricula() > 0) {
				mService.modificar(matricula);
			} else {
				mService.insertar(matricula);
			}
			model.addAttribute("listaESTUDIANTE", eService.listar());
			return "redirect:/matricula/listar";

		}
	}

	@RequestMapping("/modificar")
	public String modificar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		Matricula ma = mService.listarId(id);
		model.put("listaESTUDIANTE", eService.listar());
		model.put("matricula", ma);

		return "matricula";
	}

	@RequestMapping("/eliminar")
	public String eliminar(Map<String, Object> model, @RequestParam(value = "id") Integer id) {
		try {
			if (id != null && id > 0) {
				mService.eliminar(id);
				model.put("listaMATRICULA", mService.listar());
			}
			
		} catch (Exception e) {
		System.out.println(e.getMessage());
		}
		return "listMatricula";
	}

	@RequestMapping("/listar")
	public String listar(Map<String, Object> model) {

		model.put("listaMATRICULA", mService.listar());
		return "redirect:/detalle/irRegistrar";
	}

	@RequestMapping("/listarId")
	public String listarId(Map<String, Object> model, @ModelAttribute Matricula matricula) {
		mService.listarId(matricula.getIdMatricula());
		return "listMatricula";
	}
	
	
	/*@RequestMapping("/irBuscar")
	public String irBuscar(Model model) {
		model.addAttribute("matricula", new Matricula());
		return "buscarMatricula";
	}
	
	
	/*@RequestMapping("/buscar")
	public String buscar(Map<String, Object> model, @ModelAttribute Matricula matricula) throws ParseException {
		
		List<Matricula>listaMatricula;
		
		if (StringUtils.isNumeric(matricula.getDescripcionMatricula())){

			listaMatricula = mService.findBydescripcionMatricula(matricula.getDescripcionMatricula());

		} 
		else
		{
			matricula.setDescripcionMatricula(matricula.getDescripcionMatricula());
			listaMatricula = mService.findBydescripcionMatricula(matricula.getDescripcionMatricula());

			
			if(listaMatricula.isEmpty())
			{
				listaMatricula = mService.findBynombreEstudiante(matricula.getDescripcionMatricula());
			}
		}
		if (listaMatricula.isEmpty()) {

			model.put("mensaje", "No se encontró");
		}
		model.put("listaMATRICULA", listaMatricula);
		return "buscarMatricula";
		
	}
	*/

}
