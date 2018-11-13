#include <vector>
#include "CBotones.h"

using namespace std;

class CVeCBotones
{
private:
	vector<CBotones *> arrBoton;
public:
	CVeCBotones();
	~CVeCBotones();
	void Set_Formulario(CBotones::TypeFormulario Formulario);
	void Dibujar(Graphics^ g, Bitmap^ imgB1, Bitmap^ imgB2,
		Bitmap^ imgB3, Bitmap^ imgB4);
	bool HayColision(int pX, int pY);
	CBotones::TypeFormulario Get_Boton(int pX, int pY);
};

CVeCBotones::CVeCBotones()
{
	Set_Formulario(CBotones::TypeFormulario::Principal);
}

CVeCBotones::~CVeCBotones()
{

}

void CVeCBotones::Set_Formulario(CBotones::TypeFormulario Formulario)
{
	arrBoton.clear();
	int Ancho = 150, Largo = 40;

	if (Formulario == CBotones::TypeFormulario::Principal)
	{
		arrBoton.push_back(new CBotones(120, 530, Ancho, Largo,
			CBotones::TypeBoton::Iniciar,
			CBotones::TypeFormulario::Juego));
		arrBoton.push_back(new CBotones(320, 530, Ancho, Largo,
			CBotones::TypeBoton::Instrucciones,
			CBotones::TypeFormulario::FInstrucciones));
		arrBoton.push_back(new CBotones(520, 530, Ancho, Largo,
			CBotones::TypeBoton::Salir,
			CBotones::TypeFormulario::Fin));
	}
	else if (Formulario == CBotones::TypeFormulario::FInstrucciones)
	{
		arrBoton.push_back(new CBotones(450, 500, Ancho, Largo,
			CBotones::TypeBoton::Regresar,
			CBotones::TypeFormulario::Principal));
	}
}

void CVeCBotones::Dibujar(Graphics^ g, Bitmap^ imgB1, Bitmap^ imgB2,
	Bitmap^ imgB3, Bitmap^ imgB4)
{
	for (int i = 0; i < arrBoton.size(); i++)
	{
		if (arrBoton[i]->Get_Tipo() == CBotones::TypeBoton::Iniciar)
			arrBoton[i]->Dibujar(g, imgB1);
		else if (arrBoton[i]->Get_Tipo() == CBotones::TypeBoton::Instrucciones)
			arrBoton[i]->Dibujar(g, imgB2);
		else if (arrBoton[i]->Get_Tipo() == CBotones::TypeBoton::Salir)
			arrBoton[i]->Dibujar(g, imgB3);
		else if (arrBoton[i]->Get_Tipo() == CBotones::TypeBoton::Regresar)
			arrBoton[i]->Dibujar(g, imgB4);
	}
}

bool CVeCBotones::HayColision(int pX, int pY)
{
	for (int i = 0; i < arrBoton.size(); i++)
		if (arrBoton[i]->HayColision(pX, pY))
			return true;

	return false;
}

CBotones::TypeFormulario CVeCBotones::Get_Boton(int pX, int pY)
{
	for (int i = 0; i < arrBoton.size(); i++)
		if (arrBoton[i]->HayColision(pX, pY))
			return arrBoton[i]->Get_Formulario();

	return CBotones::TypeFormulario::SinSeleccion;
}