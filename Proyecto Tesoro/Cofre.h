#pragma once
#include "Cosa.h"

class Cofre: public Cosa{
private:
	bool encontrado;
public:
	Cofre();
	void setEncontrado(bool a);
	bool getEncontrado();
};

