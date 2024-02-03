#pragma once
#include "Cosa.h"
#include "ListaArmas.h"
class Caballero : public Cosa {
private:
	int hp;
	ListaArmas* lista;
public:
	Caballero();
	Caballero(ListaArmas* lista, bool activo);
	~Caballero();
	void setHp(int hp);
	void setLista(ListaArmas* lista);
	int getHp();
	ListaArmas* getListaArmas();
	string toString();
	void eliminarArma(string tipo);
};

