#pragma once
#include "NodoA.h"
class ListaArmas
{
private:
	NodoA* head;

public:
	ListaArmas() { head = nullptr; }
	~ListaArmas() {
		NodoA* pex = head;
		delete pex;
		head = head->getNext();
		pex = head;
	}

	bool existe(Arma* arma) {
		NodoA* pex = head;
		while (pex != nullptr) {
			if (pex->getArma() == arma) {
				return true;
			}
			pex = pex->getNext();
		}
		return false;
	}

	void ingresarPrimero(Arma* arma) {
		head = new NodoA(arma, head);
	}

	void ingresarUltimo(Arma* arma) {
		if (dynamic_cast<Ballesta*>(arma)) {
			if (cantidadBallestas() > 2) {
				return;
			}
		}
		if (dynamic_cast<Espada*>(arma)) {
			if (cantidadEspadas() > 2) {
				return;
			}
		}
		if (dynamic_cast<Yesca*>(arma)) {
			if (cantidadYescas() > 2) {
				return;
			}
		}
		NodoA* pex = head;
		NodoA* nuevo = nullptr;
		if (!existe(arma)) {
			if (pex == nullptr) {
				ingresarPrimero(arma);
			}
			else {
				while (pex->getNext() != nullptr) {
					pex = pex->getNext();
				}
				nuevo = new NodoA(arma, nullptr);
				pex->setNext(nuevo);
			}
		}
	}

	void eliminar(string tipo) {
		NodoA* pex = head;
		NodoA* victima = nullptr;
		if (pex->getArma()->getTipo() == tipo) {
			victima = head;
			head = head->getNext();
			delete victima;
		}
		else {
			while (pex->getNext() != nullptr) {
				if (pex->getNext() == getNodo(tipo)) {
					victima = pex->getNext();
					pex->setNext(victima->getNext());
					delete victima;
					return;
				}
				pex = pex->getNext();
			}
		}

	}

	NodoA* getNodo(string tipo) {
		NodoA* pex = head;
		while (pex != nullptr) {
			if (pex->getArma()->getTipo() == tipo) {
				return pex;
			}
			pex = pex->getNext();
		}
		return nullptr;
	}


	int cantidadBallestas() {
		int can = 0;
		NodoA* pex = head;
		while (pex != nullptr) {
			if (dynamic_cast<Ballesta*>(pex->getArma())) {
				can++;
			}
			pex = pex->getNext();
		}
		return can;
	}
	int cantidadEspadas() {
		int can = 0;
		NodoA* pex = head;
		while (pex != nullptr) {
			if (dynamic_cast<Espada*>(pex->getArma())) {
				can++;
			}
			pex = pex->getNext();
		}
		return can;
	}
	int cantidadYescas() {
		int can = 0;
		NodoA* pex = head;
		while (pex != nullptr) {
			if (dynamic_cast<Yesca*>(pex->getArma())) {
				can++;
			}
			pex = pex->getNext();
		}
		return can;
	}

	int cantidadDagas() {
		int can = 0;
		NodoA* pex = head;
		while (pex != nullptr) {
			if (dynamic_cast<Daga*>(pex->getArma())) {
				can++;
			}
			pex = pex->getNext();
		}
		return can;
	}

	string imprimirResumen() {
		stringstream s;
		NodoA* pex = head;
		s << "-------Inventario de Armas-----" << endl;
		s << endl;
		s << "Ballestas: " << cantidadBallestas() << endl;
		s << "Espadas: " << cantidadEspadas() << endl;
		s << "Yescas: " << cantidadYescas() << endl;
		s << "Dagas: " << cantidadDagas() << endl;
		s << "-------------------------------" << endl;
		return s.str();
	}

	string toString() {
		stringstream s;
		NodoA* pex = head;
		s << "-------Inventario de Armas-----" << endl;
		s << endl;
		while (pex != nullptr) {
			if (pex->getArma() != nullptr)
				s << pex->getArma()->toString() << endl;
			pex = pex->getNext();
		}
		s << "-------------------------------" << endl;
		return s.str();
	}

};