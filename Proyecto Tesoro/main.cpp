#include "Ballesta.h"
#include "Espada.h"
#include "Yesca.h"
#include "Daga.h"
#include "ListaArmas.h"
#include "Caballero.h"
int main() {

	Arma* a = new Ballesta(true, "ballesta");
	Arma* a1 = new Ballesta(true, "ballesta");
	Arma* b = new Espada(true, "espada");
	Arma* c = new Yesca(true, "yesca");
	Arma* d = new Daga(true, "daga");

	ListaArmas* lista = new ListaArmas();
	lista->ingresarUltimo(a);
	lista->ingresarUltimo(b);
	lista->ingresarUltimo(c);
	lista->ingresarUltimo(d);

	Cosa* caba = new Caballero(lista, true);

	cout << caba->toString() << endl;
	caba->setHp(33);
	cout << caba->getHp() << endl;
	caba->eliminarArma("yesca");
	cout << caba->toString() << endl;



	return 0;
}