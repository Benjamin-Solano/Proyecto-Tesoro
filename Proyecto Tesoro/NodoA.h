#pragma once
#include "Arma.h"
#include "Ballesta.h"
#include "Daga.h"
#include "Yesca.h"
#include "Espada.h"
class NodoA {
private:
	Arma* arma;
	NodoA* next;
public:
	NodoA();
	NodoA(Arma* arma, NodoA* next);
	~NodoA();
	void setArma(Arma* arma);
	void setNext(NodoA* next);
	Arma* getArma();
	NodoA* getNext();
};

