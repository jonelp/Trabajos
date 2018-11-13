

class CTienda
{
private:
	int costo;
	int caso;
	char* nombre;
	int ataque; 
	int defensa;


public:
	CTienda(int tipo);
	~CTienda();

	int Get_costo();
	int Get_caso();
	char* Get_nombre();
	int Get_ataque();
	int Get_defensa();

};

CTienda::CTienda(int caso)
{
	this->caso = caso;

	switch (caso)
	{
	case 0: nombre = "Cementerio de mamuts"; ataque = 800; defensa = 200; costo = 230; break;
	case 1: nombre = "Desatado "; ataque = 950; defensa = 400; costo = 250; break;
	case 2: nombre = "Espadachín de Landstar"; ataque = 350; defensa = 100; costo = 100; break;
	case 3: nombre = "Gigobyte"; ataque = 700; defensa = 320; costo = 160; break;
	case 4: nombre = "Guardia nubian"; ataque = 425; defensa = 432; costo = 250; break;
	case 5: nombre = "Gyroid"; ataque = 478; defensa = 321; costo = 320; break;
	case 6: nombre = "Hiena"; ataque = 750; defensa = 210; costo = 120; break;
	case 7: nombre = "Impacto de meteoro de hada"; ataque = 245; defensa = 432; costo = 130; break;
	case 8: nombre = "Jetroid"; ataque = 423; defensa = 754; costo = 180; break;
	case 9: nombre = "Mago Oscuro"; ataque = 210; defensa = 542; costo = 230; break;
	case 10: nombre = "Mazera DeVille"; ataque = 452; defensa = 245; costo = 170; break;
	case 11: nombre = "Mechanical Hound"; ataque = 452; defensa = 352; costo = 190; break;
	case 12: nombre = "Mokey Mokey"; ataque = 420; defensa = 78; costo = 235; break;
	case 13: nombre = "Ninja Armado"; ataque = 524; defensa = 320; costo = 265; break;
	case 14: nombre = "Patroid"; ataque = 754; defensa = 600; costo = 290; break;
	case 15: nombre = "Rey del pantano"; ataque = 783; defensa = 375; costo = 320; break;
	case 16: nombre = "Ritual del dragon blanco"; ataque = 892; defensa = 456; costo = 240; break;
	case 17: nombre = "Skycraper"; ataque = 564; defensa = 245; costo = 220; break;
	case 18: nombre = "Terremoto "; ataque = 546; defensa = 221; costo = 200; break;
	case 19: nombre = "Tyranno Infinity "; ataque = 578; defensa = 978; costo = 170; break;
	case 20: nombre = "Valkiria elemental"; ataque = 654; defensa = 765; costo = 80; break;
	case 21: nombre = "Waboku "; ataque = 132; defensa = 253; costo = 90; break;
	case 22: nombre = "Zombie de dragón"; ataque = 547; defensa = 312; costo = 130; break;
	case 23: nombre = "Sacrificio a los condenados"; ataque = 345; defensa = 245; costo = 100; break;
	case 24: nombre = "Poison Draw Frog"; ataque = 245; defensa = 240; costo = 110; break;
	case 25: nombre = "Muka Muka"; ataque = 537; defensa = 345; costo = 245; break;
	case 26: nombre = "Llama espíritus"; ataque = 753; defensa = 354; costo = 265; break;
	case 27: nombre = "Insecto acorazado de metal"; ataque = 765; defensa = 654; costo = 140; break;
	case 28: nombre = "Gatling Dragon "; ataque = 56; defensa = 56; costo = 80; break;
	case 29: nombre = "Energia milenaria"; ataque = 785; defensa = 567; costo = 350; break;
	}
}
CTienda::~CTienda(){}

int CTienda::Get_costo(){ return this->costo; }
int CTienda::Get_caso(){ return this->caso; }
char* CTienda::Get_nombre(){ return this->nombre; }
int CTienda::Get_ataque(){ return this->ataque; }
int CTienda::Get_defensa(){ return this->defensa; }
