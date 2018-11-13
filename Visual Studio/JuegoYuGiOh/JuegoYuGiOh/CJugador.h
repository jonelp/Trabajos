#define Col 3
#define Fil 4

#include "Matriz.h"


using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

class CJugador
{
private:
	int x;
	int y;
	int Ancho;
	int Largo;
	int dx;
	int dy;
	int Indice;
	int Escenario;
	int pos1, pos2;


public:
	CJugador(int x, int y, int Ancho, int Largo, int dy, int dx, int Indice, int Escenario);
	~CJugador();


	void DibujarJugador(Graphics^g, Bitmap^jugador, Bitmap^Mapa, Keys tecla, Bitmap^Mapa2);
	void DibujarMapa(Graphics^g, Bitmap^Mapa, Bitmap^Jugador);
	void Mover(int AnchoF, int LargoF, Keys Tecla);
	int Get_Tipodecampo();
};

CJugador::CJugador(int x, int y, int Ancho, int Largo, int dy, int dx, int Indice, int Escenario)
{
	this->x = x;
	this->y = y;
	this->Ancho = Ancho;
	this->Largo = Largo;
	this->dx = dx;
	this->dy = dy;
	this->Indice = Indice;
	this->Escenario = Escenario;
	this->pos1 = 0;
	this->pos2 = 0;

}
CJugador::~CJugador(){}

void CJugador::DibujarJugador(Graphics^g, Bitmap^jugador, Bitmap^Mapa, Keys Tecla, Bitmap^Mapa2)
{
	int AnchoI = jugador->Width / Col;
	int LargoI = jugador->Height / Fil;




	if (Indice < Col-1)	
		Indice++;
	else 
		Indice = 0;


	Rectangle Jugador = Rectangle(10, 10, AnchoI, LargoI);
	Rectangle Fondo = Rectangle(0, 0, Mapa->Width, Mapa->Height);
	Rectangle Sala2 = Rectangle(0, 0, Mapa2->Width, Mapa2->Height);
	Rectangle DestinoSala2 = Rectangle(200, 150, 400, 300);
	Rectangle DesJugador = Rectangle(x, y, Ancho, Largo);
	Rectangle OriJugador1 = Rectangle(AnchoI*Indice, LargoI + 47, AnchoI, LargoI);
	Rectangle OriJugador2 = Rectangle(AnchoI*Indice, LargoI, AnchoI, LargoI);
	Rectangle OriJugador3 = Rectangle(AnchoI*Indice, LargoI + 94, AnchoI, LargoI);
	Rectangle OriJugador4 = Rectangle(AnchoI*Indice, LargoI - 47, AnchoI, LargoI);

	if (Escenario == 0 )
	{
		g->DrawImage(Mapa, g->VisibleClipBounds, Fondo, GraphicsUnit::Pixel);

		if (Tecla == Keys::Right)
		{
			g->DrawImage(Mapa, g->VisibleClipBounds, Fondo, GraphicsUnit::Pixel);
			g->DrawImage(jugador, DesJugador, OriJugador1, GraphicsUnit::Pixel);
		}
		if (Tecla == Keys::Left)
		{
			g->DrawImage(Mapa, g->VisibleClipBounds, Fondo, GraphicsUnit::Pixel);
			g->DrawImage(jugador, DesJugador, OriJugador2, GraphicsUnit::Pixel);
		}
		if (Tecla == Keys::Up)
		{
			g->DrawImage(Mapa, g->VisibleClipBounds, Fondo, GraphicsUnit::Pixel);
			g->DrawImage(jugador, DesJugador, OriJugador3, GraphicsUnit::Pixel);
		}
		if (Tecla == Keys::Down)
		{
			g->DrawImage(Mapa, g->VisibleClipBounds, Fondo, GraphicsUnit::Pixel);
			g->DrawImage(jugador, DesJugador, OriJugador4, GraphicsUnit::Pixel);
		}
	}


	else if (Escenario == 1 )
	{
		if (Tecla == Keys::Right){
			g->FillRectangle(Brushes::Black, g->VisibleClipBounds);
			g->DrawImage(Mapa2, DestinoSala2, Sala2, GraphicsUnit::Pixel);
			g->DrawImage(jugador, DesJugador, OriJugador1, GraphicsUnit::Pixel);
		}

		if (Tecla == Keys::Left){
			g->FillRectangle(Brushes::Black, g->VisibleClipBounds);
			g->DrawImage(Mapa2, DestinoSala2, Sala2, GraphicsUnit::Pixel);
			g->DrawImage(jugador, DesJugador, OriJugador2, GraphicsUnit::Pixel);
		}

		if (Tecla == Keys::Up){
			g->FillRectangle(Brushes::Black, g->VisibleClipBounds);
			g->DrawImage(Mapa2, DestinoSala2, Sala2, GraphicsUnit::Pixel);
			g->DrawImage(jugador, DesJugador, OriJugador3, GraphicsUnit::Pixel);
		}

		if (Tecla == Keys::Down){
			g->FillRectangle(Brushes::Black, g->VisibleClipBounds);
			g->DrawImage(Mapa2, DestinoSala2, Sala2, GraphicsUnit::Pixel);
			g->DrawImage(jugador, DesJugador, OriJugador4, GraphicsUnit::Pixel);
		}
	}


}
void CJugador::DibujarMapa(Graphics^g, Bitmap^Mapa, Bitmap^Jugador)
{

	Rectangle Fondo = Rectangle(0, 0, Mapa->Width, Mapa->Height);
	Rectangle OriJugador4 = Rectangle((Jugador->Width / 24) - 16 + Indice * 16, 0, 15, 20);
	Rectangle DesJugador = Rectangle(x, y, Ancho, Largo);

	g->DrawImage(Mapa, g->VisibleClipBounds, Fondo, GraphicsUnit::Pixel);
	g->DrawImage(Jugador, DesJugador, OriJugador4, GraphicsUnit::Pixel);


}
void CJugador::Mover(int AnchoF, int LargoF, Keys Tecla)
{
	int x2 = x / 10;
	int y2 = y / 10;

	if (Escenario == 0){

		int x2 = x / 10;
		int y2 = y / 10;

		if (Tecla == Keys::Right)
		{
			if (MatrizPricial[y2][x2 + 1] == 0)x += dx;
			else if (MatrizPricial[y2][x2 + 1] == 2)
			{
				x += dx;
				Escenario = 1;
				pos1 = x;
				pos2 = y;
				x = 400;
				y = 430;
			}
		}

		if (Tecla == Keys::Left)
		{
			if (MatrizPricial[y2][x2 - 1] == 0) x -= dx;
			else if (MatrizPricial[y2][x2 - 1] == 2)
			{
				x -= dx;
				Escenario = 1;
				pos1 = x;
				pos2 = y;
				x = 400;
				y = 430;
			}
		}

		if (Tecla == Keys::Up)
		{
			if (MatrizPricial[y2 - 1][x2] == 0)y -= dy;
			else if (MatrizPricial[y2 - 1][x2] == 2)
			{
				y -= dy;
				Escenario = 1;
				pos1 = x;
				pos2 = y;
				x = 400;
				y = 430;
			}
			if (MatrizPricial[y2 - 1][x2] == 3)
			{
				y -= dy;
				Escenario = 2;
			}
		}

		if (Tecla == Keys::Down)
		{
			if (MatrizPricial[y2 + 1][x2] == 0)y += dy;
			else if (MatrizPricial[y2 + 1][x2] == 2)
			{
				y += dy;
				Escenario = 1;
				pos1 = x;
				pos2 = y;
				x = 400;
				y = 430;
			}
		}
	}


	if (Escenario == 1 )
	{
		x2 = x2 - 60;
		y2 = y2 - 12;
		if (Tecla == Keys::Right)
		{
			if (Matriz2[y2][x2 + 1] == 0)
			{
				x += dx;
				Escenario = 1;
			}
			if (Matriz2[y2][x2 + 1] == 2)
			{
				x += dx;
				Escenario = 0;
				x = pos1;
				y = pos2;
			}
		}
		else if (Tecla == Keys::Left)
		{
			if (Matriz2[y2][x2 - 1] == 0)
			{
				x -= dx;
				Escenario = 1;
			}
			if (Matriz2[y2][x2 - 1] == 2)
			{
				x -= dx;
				Escenario = 0;
				pos1 = x;
				pos2 = y;
				x = 650;
				y = 460;
			}
		}
		else if (Tecla == Keys::Up)
		{
			if (Matriz2[y2 - 1][x2] == 0)
			{
				y -= dy;
				Escenario = 1;
			}
			if (Matriz2[y2 - 1][x2] == 2)
			{
				y -= dy;
				Escenario = 0;
				x = pos1;
				y = pos2;
			}
			if (Matriz2[y2 - 1][x2] == 3)
			{
				//y -= dy;
				Escenario = 2;
			}
		}
		else if (Tecla == Keys::Down)
		{
			if (Matriz2[y2 + 1][x2] == 0)
			{
				y += dy;
				Escenario = 1;
			}
			if (Matriz2[y2 + 1][x2] == 2)
			{
				y += dy;
				Escenario = 0;
				x = pos1;
				y = pos2;
			}
		}
	}
}

int CJugador::Get_Tipodecampo()
{
	return Escenario;
}