#include "NodoA.h"
NodoA::NodoA() {
	arma = nullptr;
	next = nullptr;
}

NodoA::NodoA(Arma* arma, NodoA* next) {
	
	if (arma->getTipo() == Ballesta().getTipo()) {
		this->arma = new Ballesta();
	}

	else if (arma->getTipo() == Daga().getTipo()) {
		this->arma = new Daga();
	}
	
	else if (arma->getTipo() == Espada().getTipo()) {
		this->arma = new Espada();
	}
	
	else if (arma->getTipo() == Yesca().getTipo()) {
		this->arma = new Yesca();
	}
	
	this->next = next;
}

NodoA::~NodoA() {
	delete arma;
}

void NodoA::setArma(Arma* arma) { this->arma = new Arma(arma); }
void NodoA::setNext(NodoA* next) { this->next = next; }

Arma* NodoA::getArma() { return arma; }
NodoA* NodoA::getNext() { return next; }
