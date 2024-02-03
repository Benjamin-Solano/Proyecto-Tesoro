#pragma once
#include "NodoA.h"
class ListaArmas {
private:
	NodoA* head;
public:
	ListaArmas();
	~ListaArmas();
	bool existe(Arma* arma);
	void ingresarPrimero(Arma* arma);
	void ingresarUltimo(Arma* arma);
	void eliminar(string tipo);
	NodoA* getNodo(string tipo);
	int cantidadBallestas();
	int cantidadEspadas();
	int cantidadYescas();
	int cantidadDagas();
	string imprimirResumen();
	string toString();
};