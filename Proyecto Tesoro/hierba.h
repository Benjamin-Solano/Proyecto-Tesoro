#pragma once
#include "Cosa.h"
#include "Caballero.h"

class Hierba : public Cosa {
private:
	int vida_restaurada;
public:
	Hierba();
	~Hierba();
	void setEstado(bool);
	void setHp();
	void curar(Cosa*);
	string toString();
};