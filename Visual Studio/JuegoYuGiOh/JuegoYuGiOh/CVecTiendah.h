#include "CTienda.h"
#include <vector>

using namespace std;


class CVecTienda
{
private:
	vector<CTienda*> tienda;
	vector<CTienda*> inventario;
	vector<CTienda*> baraja;
	
public:
	CVecTienda();
	~CVecTienda();

	
	void Comprar(int indice);
	void Comprados(int indice);
	vector<CTienda*> Get_Tienda();
	vector<CTienda*> Get_Inventario();
	vector<CTienda*> Get_Baraja();

};

CVecTienda::CVecTienda()
{
	for (int i = 0; i < 29; i++){
		CTienda* objtienda = new CTienda(i);
		tienda.push_back(objtienda);
	}
}
CVecTienda::~CVecTienda(){}

void CVecTienda::Comprados(int indice)
{
	inventario.push_back(baraja[indice]);
	baraja.erase(begin(baraja) + indice);
}
void CVecTienda::Comprar(int indice)
{
	inventario.push_back(tienda[indice]);
}


vector<CTienda*> CVecTienda::Get_Tienda(){ return this->tienda; }
vector<CTienda*> CVecTienda::Get_Inventario(){ return this->inventario; }
vector<CTienda*> CVecTienda::Get_Baraja(){ return this->baraja	; }