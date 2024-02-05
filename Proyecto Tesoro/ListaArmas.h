#pragma once
#include "NodoA.h"
class ListaArmas {
private:
	NodoA* head;
public:

	void guardarListaArmas() { 
		string rutaArchivo = "..//ListaArmas.txt";
		NodoA* exo = head;
		ofstream salida;
		salida.open(rutaArchivo.c_str());
		while (exo != nullptr) {
			exo->getArma()->guardar(salida);
			exo = exo->getNext();
		}
		salida.close();
	}


	ListaArmas();
	ListaArmas(ListaArmas* list) {
		NodoA* pex = list->getHead();
		while (pex != nullptr) {
			ingresarUltimo(pex->getArma());
			pex = pex->getNext();
		}
	}
	~ListaArmas();
	NodoA* getHead() { return head; }
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