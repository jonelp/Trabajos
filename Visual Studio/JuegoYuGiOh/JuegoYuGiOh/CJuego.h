#include "CJugador.h"

class CJuego
{
private:
	CJugador* objjugador;
public:
	CJuego();
	~CJuego();

	void DibujarJuego(Graphics^g, Bitmap^jugador, Bitmap^Mapa, Keys tecla, Bitmap^Mapa2);
	void DibujarMapa(Graphics^g, Bitmap^Mapa, Bitmap^Jugador);
	void MoverJugador(int AnchoF, int LargoF, Keys Tecla);
	int Get_TipoCampo();
};


CJuego::CJuego()
{
	objjugador = new CJugador(100, 100 ,15, 15, 5, 5, 0, 0);
}
CJuego::~CJuego(){}

void CJuego::DibujarJuego(Graphics^g, Bitmap^jugador, Bitmap^Mapa, Keys tecla, Bitmap^Mapa2)
{
	objjugador->DibujarJugador(g, jugador, Mapa, tecla, Mapa2);
}
void CJuego::DibujarMapa(Graphics^g, Bitmap^Mapa, Bitmap^Jugador)
{
	objjugador->DibujarMapa(g, Mapa, Jugador);
}
void CJuego::MoverJugador(int AnchoF, int LargoF, Keys Tecla)
{
	objjugador->Mover(AnchoF, LargoF, Tecla);
}
int CJuego::Get_TipoCampo()
{
	return objjugador->Get_Tipodecampo();
}