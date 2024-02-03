#include "NodoA.h"
NodoA::NodoA() {
	arma = nullptr;
	next = nullptr;
}
NodoA::NodoA(Arma* arma, NodoA* next) {
	this->arma = arma;
	this->next = next;
}
NodoA::~NodoA() {
	delete arma;
}

void NodoA::setArma(Arma* arma) { this->arma = arma; }
void NodoA::setNext(NodoA* next) { this->next = next; }

Arma* NodoA::getArma() { return arma; }
NodoA* NodoA::getNext() { return next; }
