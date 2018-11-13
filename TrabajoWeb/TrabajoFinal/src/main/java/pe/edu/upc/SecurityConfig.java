package pe.edu.upc;

import javax.sql.DataSource;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Configuration;
import org.springframework.security.config.annotation.authentication.builders.AuthenticationManagerBuilder;
import org.springframework.security.config.annotation.web.builders.HttpSecurity;
import org.springframework.security.config.annotation.web.configuration.EnableWebSecurity;
import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter;




@Configuration
@EnableWebSecurity
public class SecurityConfig extends WebSecurityConfigurerAdapter {
	
	@Autowired
	private DataSource dataSource;

	public void configure(AuthenticationManagerBuilder auth) throws Exception {
		auth.jdbcAuthentication().dataSource(dataSource).usersByUsernameQuery(
				"select * from (select nombre as username, clave as password, estado as enabled from usuario) as users where username = ? ")
				.authoritiesByUsernameQuery(
						"select * from (select nombre as username, tipo as AUTHORITY from usuario) as authorities where username = ? ");
	}

	public void configure(HttpSecurity http) throws Exception {

		try {
			http.authorizeRequests()

					.antMatchers("/admin/**").access("hasRole('ROLE_ADMIN') ")
					.antMatchers("/apoderado/**").access("hasRole('ROLE_ADMIN') or hasRole('ROLE_USER') ")
					.antMatchers("/detalle/**").access("hasRole('ROLE_ADMIN')")
					.antMatchers("/estudiante/**").access("hasRole('ROLE_ADMIN') or hasRole('ROLE_USER') ")
					.antMatchers("/local/**").access("hasRole('ROLE_ADMIN') or hasRole('ROLE_USER') ")
					.antMatchers("/matricula/**").access("hasRole('ROLE_ADMIN')")
					.antMatchers("/profesor/**").access("hasRole('ROLE_ADMIN') or hasRole('ROLE_USER') ")
					.antMatchers("/salon/**").access("hasRole('ROLE_ADMIN') or hasRole('ROLE_USER') ")
					.antMatchers("/taller/**").access("hasRole('ROLE_ADMIN') or hasRole('ROLE_USER') ").and()


					.formLogin().loginPage("/login").loginProcessingUrl("/j_spring_security_check")
					.defaultSuccessUrl("/estudiante/listar").failureUrl("/login?error").usernameParameter("usuario")
					.passwordParameter("clave").and().logout().logoutSuccessUrl("/login?logout")
					.logoutUrl("/j_spring_security_logout").and().exceptionHandling().accessDeniedPage("/403").and()
					.csrf().disable();

		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
	}


}
