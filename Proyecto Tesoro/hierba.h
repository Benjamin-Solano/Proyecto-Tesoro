#pragma once
#include "Cosa.h"

class Hierba : public Cosa {
private:
	int vida_restaurada;

public:
	Hierba();
	~Hierba();

	void setEstado(bool);
	void setHp();
	

	string toString();

};