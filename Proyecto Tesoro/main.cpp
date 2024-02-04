#include "Juego.h"

int main() {

	/*Arma* a = new Ballesta();
	Arma* a1 = new Ballesta();
	Arma* b = new Espada();
	Arma* c = new Yesca();
	Arma* d = new Daga();

	ListaArmas* lista = new ListaArmas();
	lista->ingresarUltimo(a);
	lista->ingresarUltimo(b);
	lista->ingresarUltimo(c);
	lista->ingresarUltimo(d);
	lista->ingresarUltimo(a1);

	lista->eliminar("ballesta");
	lista->eliminar("ballesta");
	cout << lista->toString() << endl;

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

	/*Arma* espada = new Espada();
	ListaArmas* list = new ListaArmas();
	list->ingresarUltimo(espada);
	Caballero* cab = new Caballero(list, true);
	Matriz* mat = new Matriz();
	cout << mat->toString() << endl;
	mat->verificar(1,1, cab);
	mat->verificar(2,2, cab);
	mat->verificar(3,3, cab);
	mat->verificar(4,4, cab);
	cout << mat->toString() << endl;
	cout << cab->toString() << endl;*/

	/*mat->ingresar7Espadas();
	mat->ingresar6Ballestas();*/
	//cout << mat->toString() << endl;

	//probar movimiento
	/*ListaArmas* list = new ListaArmas();
	Caballero* cab = new Caballero(list, true);
	Matriz* mat = new Matriz();
	cout << mat->toString() << endl;
	mat->movimiento('d', cab);
	cout << mat->toString() << endl;
	mat->movimiento('w', cab);
	cout << mat->toString() << endl;*/

	//verificar
	
	//mat->verificar(0, 0, cab);//espada
	//mat->verificar(0, 1, cab);//ogro
	//mat->verificar(1, 1, cab);//ballesta
	//mat->verificar(1, 0, cab);//gargola
	
	//ts
	// 
	//cout << mat->toString() << endl;
	// << cab->getListaArmas()->toString() << endl;

	Juego j;



	return 0;
}