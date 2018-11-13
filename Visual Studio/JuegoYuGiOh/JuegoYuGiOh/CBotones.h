using namespace System::Drawing;

class CBotones
{
public:
	enum TypeBoton { Iniciar, Instrucciones, Regresar, Salir };
	enum TypeFormulario { Fin, Principal, FInstrucciones, Juego, SinSeleccion };
	CBotones(int X, int Y, int Ancho, int Largo, TypeBoton Tipo, TypeFormulario Formulario);
	~CBotones();
	TypeBoton Get_Tipo();
	TypeFormulario Get_Formulario();
	void Dibujar(Graphics^ g, Bitmap^ img);
	bool HayColision(int pX, int pY);
private:
	int X, Y;
	int Ancho, Largo;
	TypeBoton Tipo;
	TypeFormulario Formulario;
};

CBotones::CBotones(int X, int Y, int Ancho, int Largo, TypeBoton Tipo, TypeFormulario Formulario)
{
	this->X = X;
	this->Y = Y;
	this->Ancho = Ancho;
	this->Largo = Largo;
	this->Tipo = Tipo;
	this->Formulario = Formulario;
}

CBotones::~CBotones()
{

}

CBotones::TypeBoton CBotones::Get_Tipo()
{
	return this->Tipo;
}

CBotones::TypeFormulario CBotones::Get_Formulario()
{
	return this->Formulario;
}

void CBotones::Dibujar(Graphics^ g, Bitmap^ img)
{
	int AnchoI = img->Width;
	int LargoI = img->Height;

	Rectangle Origen = Rectangle(0, 0, AnchoI, LargoI);
	Rectangle Destino = Rectangle(X, Y, Ancho, Largo);
	g->DrawImage(img, Destino, Origen, GraphicsUnit::Pixel);
}

bool CBotones::HayColision(int pX, int pY)
{
	return pX >= X && pX <= X + Ancho &&
		pY >= Y && pY <= Y + Largo;
}