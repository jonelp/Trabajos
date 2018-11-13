#include "CVecTiendah.h"
class CControladorTienda
{
private:
	int monedas;
	CVecTienda*objvec;

public:
	CControladorTienda();
	~CControladorTienda();

	int Get_monedas();
	void Set_monedas(int monedas);

	CVecTienda *vector_cartas();
};

CControladorTienda::CControladorTienda(){ this->monedas = 650; objvec = new CVecTienda(); }
CControladorTienda::~CControladorTienda(){}

int CControladorTienda::Get_monedas(){ return this-> monedas; }
void CControladorTienda::Set_monedas(int aux){ this->monedas = monedas + aux; }
CVecTienda *CControladorTienda::vector_cartas(){ return objvec; }