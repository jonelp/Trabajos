#include "CVecBotones.h"

class CIntro
{
private:
	CVeCBotones* objVeCBotones;
	CBotones::TypeFormulario Formulario;
	int contador;
public:
	CIntro();
	~CIntro();
	int Cont();
	void Limpiar();
	void Dibujar(Graphics^ g, Bitmap^ imgB1, Bitmap^ imgB2,
		Bitmap^ imgB3, Bitmap^ imgB4, Bitmap^ imgF1, Bitmap^ imgF2);
	bool HaySeleccion(int pX, int pY);
	CBotones::TypeFormulario Get_Boton(int pX, int pY);
	void Set_Formulario(CBotones::TypeFormulario Formulario);
};

CIntro::CIntro()
{
	this->Formulario = CBotones::TypeFormulario::Principal;
	objVeCBotones = new CVeCBotones();
}

CIntro::~CIntro()
{
}

void CIntro::Dibujar(Graphics^ g, Bitmap^ imgB1, Bitmap^ imgB2,
	Bitmap^ imgB3, Bitmap^ imgB4, Bitmap^ imgF1, Bitmap^ imgF2)
{
	// DIBUJAR FONDO
	Rectangle OrigenF, DestinoF = Rectangle(0, 0,
		g->VisibleClipBounds.Width,
		g->VisibleClipBounds.Height);

	if (Formulario == CBotones::TypeFormulario::Principal)
	{
		OrigenF = Rectangle(0, 0, imgF1->Width, imgF1->Height);
		g->DrawImage(imgF1, DestinoF, OrigenF, GraphicsUnit::Pixel);
		contador = 2;
	}
	else if (Formulario == CBotones::TypeFormulario::FInstrucciones)
	{
		OrigenF = Rectangle(0, 0, imgF2->Width, imgF2->Height);
		g->DrawImage(imgF2, DestinoF, OrigenF, GraphicsUnit::Pixel);

		contador = 1;
	}
	else if (Formulario == CBotones::TypeFormulario::Juego)
	{
	}

	// DIBUJAR BOTONES
	objVeCBotones->Dibujar(g, imgB1, imgB2, imgB3, imgB4);
}

bool CIntro::HaySeleccion(int pX, int pY)
{
	return objVeCBotones->HayColision(pX, pY);
}

CBotones::TypeFormulario CIntro::Get_Boton(int pX, int pY)
{
	return objVeCBotones->Get_Boton(pX, pY);
}

void CIntro::Set_Formulario(CBotones::TypeFormulario Formulario)
{
	this->Formulario = Formulario;
	objVeCBotones->Set_Formulario(Formulario);
}
int CIntro::Cont()
{
	return contador;
}

void CIntro::Limpiar()
{
	contador = 0;
}