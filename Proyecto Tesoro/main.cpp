#include "Ballesta.h"
#include "Espada.h"
#include "Yesca.h"
#include "Daga.h"
#include "ListaArmas.h"
#include "Caballero.h"
#include "Ogro.h"
#include "Gargola.h"
#include "Tentaculos.h"
#include "hierba.h"
#include "Enemigo.h"
#include "Matriz.h"

int main() {

	/*Arma* a = new Ballesta(true, "ballesta");
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
	caba->setHp(100);
	cout << caba->getHp() << endl;
	caba->eliminarArma("yesca");
	cout << caba->toString() << endl;

	system("pause");
	system("cls");

	// Prueba de enemigos y hierba
	Cosa* item1 = new Hierba();
	cout << item1->toString() << endl;
	
	Enemigo* ogro = new Ogro();
	cout << ogro->toString() << endl;

	Enemigo* tentaculo = new Tentaculos();
	cout << tentaculo->toString() << endl;

	Enemigo* gargola = new Gargola();
	cout << gargola->toString() << endl;


	// Curando al caballero
	item1->curar(caba);
	cout << "Vida del Caballero: " << caba->getHp() << endl;

	// Atacando al caballero
	gargola->atacar(caba, gargola);
	cout << "Vida del Caballero: " << caba->getHp() << endl;
*/

	Matriz* mat = new Matriz();

	/*mat->ingresar7Espadas();
	mat->ingresar6Ballestas();*/
	cout << mat->toString() << endl;

	return 0;
}