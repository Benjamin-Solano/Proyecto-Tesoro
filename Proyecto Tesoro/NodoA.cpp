#include "NodoA.h"
NodoA::NodoA() {
	arma = nullptr;
	next = nullptr;
}
NodoA::NodoA(Arma* arma, NodoA* next) {
	this->arma = new Arma(arma);
	this->next = next;
}
NodoA::~NodoA() {
	delete arma;
}

void NodoA::setArma(Arma* arma) { this->arma = new Arma(arma); }
void NodoA::setNext(NodoA* next) { this->next = next; }

Arma* NodoA::getArma() { return arma; }
NodoA* NodoA::getNext() { return next; }
