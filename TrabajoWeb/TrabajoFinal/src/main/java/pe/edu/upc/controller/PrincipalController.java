package pe.edu.upc.controller;

import java.util.Map;

import org.springframework.security.authentication.AnonymousAuthenticationToken;
import org.springframework.security.core.Authentication;
import org.springframework.security.core.context.SecurityContextHolder;
import org.springframework.security.core.userdetails.UserDetails;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.servlet.ModelAndView;


@Controller
public class PrincipalController {
	@RequestMapping("/")
	public String irEstudiante(Map<String, Object> model) {
		return "login";
	}
		
	
	@RequestMapping(value="/login", method=RequestMethod.GET)
	public ModelAndView login(@RequestParam(value="error",required =false) String error, 
								@RequestParam(value="logout",required=false) String logout) {
		
		
		ModelAndView model=new ModelAndView();
		if(error!=null) {
			model.addObject("error","Credenciales Incorrectas");
		}
		if(logout!=null) {
			model.addObject("msg","Sesión Cerrada Correctamente");
		}
		model.setViewName("login");
		return model;
	}

	
	@RequestMapping(value="/403", method=RequestMethod.GET)
	public ModelAndView accessDenied() {
		
		
		ModelAndView model=new ModelAndView();
		
		Authentication auth=SecurityContextHolder.getContext().getAuthentication();
		
		if(!(auth instanceof AnonymousAuthenticationToken)) {
			UserDetails userDetail=(UserDetails) auth.getPrincipal();
			model.addObject("usuario",userDetail.getUsername());
		}
		model.setViewName("403");
		return model;
	}
	
	@RequestMapping(value="/admin**", method=RequestMethod.GET)
	public ModelAndView adminPage() {
		
		
		ModelAndView model=new ModelAndView();
		
		model.setViewName("/admin/protegido");
		return model;
	}	


}
