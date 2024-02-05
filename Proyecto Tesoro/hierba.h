#pragma once
#include "Cosa.h"
#include "Caballero.h"

class Hierba : public Cosa {
private:
	int vida_restaurada;
	string elemento;
public:
	Hierba();
	~Hierba();
	string getElemento() { return elemento; }
	void setEstado(bool);
	void setHp();
	void curar(Cosa*);
	string toString();
};