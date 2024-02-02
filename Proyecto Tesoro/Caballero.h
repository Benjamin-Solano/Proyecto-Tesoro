#pragma once
#include "Cosa.h"
#include "ListaArmas.h"
class Caballero : public Cosa
{
private:
	int hp;
	ListaArmas* lista;

public:

	Caballero() {
		hp = 100;
		lista = new ListaArmas();
	}

	Caballero(ListaArmas* lista, bool activo)
		: Cosa(activo), hp(100), lista(lista) {
	}
	~Caballero() { delete lista; }
	void setHp(int hp) { this->hp = hp; }
	void setLista(ListaArmas* lista) { this->lista = lista; }

	int getHp() { return hp; }
	ListaArmas* getListaArmas() { return lista; }
	string toString() {
		stringstream s;
		s << "-*-*-*-*-*-*-Caballero-*-*-*-*-*-*-" << endl;
		s << "HP: " << hp << endl;
		s << endl;
		s << lista->toString() << endl;
		return s.str();
	}

	void eliminarArma(string tipo) {
		lista->eliminar(tipo);
	}

};

