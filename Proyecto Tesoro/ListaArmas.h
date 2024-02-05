#pragma once
#include "NodoA.h"
class ListaArmas {
private:
	NodoA* head;
public:

	void guardarListaArmas() { 
		fstream strm("..//ListaArmas.txt", ios::app);
		if (strm.is_open()) {
			NodoA* exo = head;
			while (exo != nullptr) {
				exo->getArma()->guardar(strm);
				exo = exo->getNext();
			}
			strm.close();
		}	
	}


	static ListaArmas* recuperar() {
		int x = true;
		fstream strm("..//ListaArmas.txt", ios::in);
		if (strm.is_open()) {
			
			ListaArmas* list = new ListaArmas();

			do{
				string idStr = "";
				getline(strm, idStr, DELIMITA_CAMPO);

				if (idStr == "21") {
					if (Arma* arma = Ballesta::recuperarlo(strm, idStr)) {
						if (arma == nullptr) {
							x = false; break;
						}
						list->ingresarUltimo(arma);
					}
				}
				if (idStr == "22") {
					if (Arma* arma = Espada::recuperarlo(strm, idStr)) {
						if (arma == nullptr) {
							x = false; break;
						}
						list->ingresarUltimo(arma);
					}
				}
				if (idStr == "23") {
					if (Arma* arma = Yesca::recuperarlo(strm, idStr)) {
						if (arma == nullptr) {
							x = false; break;
						}
						list->ingresarUltimo(arma);
					}
				}
				if (idStr == "24") {
					if (Arma* arma = Daga::recuperarlo(strm, idStr)) {
						if (arma == nullptr) {
							x = false; break;
						}
						list->ingresarUltimo(arma);
					}
				}
			
			} while (x == true);
			


			strm.close();
		}

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