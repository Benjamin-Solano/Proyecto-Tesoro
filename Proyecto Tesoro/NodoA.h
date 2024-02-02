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
	NodoA() {
		arma = nullptr;
		next = nullptr;
	}
	NodoA(Arma* arma, NodoA* next) {
		this->arma = arma;
		this->next = next;
	}
	~NodoA() {
		delete arma;
	}

	void setArma(Arma* arma) { this->arma = arma; }
	void setNext(NodoA* next) { this->next = next; }

	Arma* getArma() { return arma; }
	NodoA* getNext() { return next; }

};

