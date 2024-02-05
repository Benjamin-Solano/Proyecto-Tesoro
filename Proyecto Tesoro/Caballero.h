#pragma once
#include "Cosa.h"
#include "ListaArmas.h"

#define DELIMITA_CAMPO '\t'
#define DELIMITA_REGISTRO '\n'

class Caballero : public Cosa {
private:
	int hp;
	ListaArmas* lista;
public:

	virtual void guardarC(ostream& salida) {
		salida << hp << DELIMITA_REGISTRO;	
	}

	Caballero();
	Caballero(ListaArmas* lista, bool activo);
	Caballero(Caballero* cab) {
		lista = new ListaArmas(cab->getListaArmas());
		hp = cab->getHp();
	}
	~Caballero();
	string getTipo() { return "Caballero"; }
	void setHp(int hp);
	void setLista(ListaArmas* lista);
	int getHp();
	ListaArmas* getListaArmas();
	string toString();
	void eliminarArma(string tipo);
};

