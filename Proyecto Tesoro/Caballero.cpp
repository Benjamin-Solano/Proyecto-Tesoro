#include "Caballero.h"

Caballero::Caballero() {
	hp = 100;
	lista = new ListaArmas();
}

Caballero::Caballero(ListaArmas* lista, bool activo)
	: Cosa("01",activo), hp(100), lista(lista) {
}
Caballero::~Caballero() { delete lista; }
void Caballero::setHp(int hp) { this->hp = hp; }
void Caballero::setLista(ListaArmas* lista) { this->lista = lista; }

int Caballero::getHp() { return hp; }
ListaArmas* Caballero::getListaArmas() { return lista; }
string Caballero::toString() {
	stringstream s;
	s << "-*-*-*-*-*-*-Caballero-*-*-*-*-*-*-" << endl;
	s << "HP: " << hp << endl;
	s << endl;
	s << lista->toString() << endl;
	return s.str();
}

void Caballero::eliminarArma(string tipo) {
	lista->eliminar(tipo);
}