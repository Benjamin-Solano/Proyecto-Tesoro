#pragma once
#include "Cosa.h"
class Cofre: public Cosa
{
private:
	bool encontrado;

public:
	Cofre()
		:Cosa(true), encontrado(false){}
	void setEncontrado(bool a) { encontrado = a; }
	bool getEncontrado() { return encontrado; }

};

