#include "ListaArmas.h"

ListaArmas::ListaArmas() { head = nullptr; }
ListaArmas::~ListaArmas() {
	NodoA* pex = head;
	delete pex;
	head = head->getNext();
	pex = head;
}

bool ListaArmas::existe(Arma* arma) {
	NodoA* pex = head;
	while (pex != nullptr) {
		if (pex->getArma() == arma) {
			return true;
		}
		pex = pex->getNext();
	}
	return false;
}

void ListaArmas::ingresarPrimero(Arma* arma) {
	head = new NodoA(arma, head);
}

void ListaArmas::ingresarUltimo(Arma* arma) {
	/*if (dynamic_cast<Ballesta*>(arma)) {
		if (cantidadBallestas() > 2) {
			return;
		}
		NodoA* pex = head;
		NodoA* nuevo = nullptr;
		if (!existe(arma)) {
			if (pex == nullptr) {
				ingresarPrimero((Ballesta*)arma);
			}
			else {
				while (pex->getNext() != nullptr) {
					pex = pex->getNext();
				}
				nuevo = new NodoA((Ballesta*)arma, nullptr);
				pex->setNext(nuevo);
			}
		}
	}
	if (dynamic_cast<Espada*>(arma)) {
		if (cantidadEspadas() > 2) {
			return;
		}
		NodoA* pex = head;
		NodoA* nuevo = nullptr;
		if (!existe(arma)) {
			if (pex == nullptr) {
				ingresarPrimero((Espada*)arma);
			}
			else {
				while (pex->getNext() != nullptr) {
					pex = pex->getNext();
				}
				nuevo = new NodoA((Espada*)arma, nullptr);
				pex->setNext(nuevo);
			}
		}
	}
	if (dynamic_cast<Yesca*>(arma)) {
		if (cantidadYescas() > 2) {
			return;
		}
		NodoA* pex = head;
		NodoA* nuevo = nullptr;
		if (!existe(arma)) {
			if (pex == nullptr) {
				ingresarPrimero((Yesca*)arma);
			}
			else {
				while (pex->getNext() != nullptr) {
					pex = pex->getNext();
				}
				nuevo = new NodoA((Yesca*)arma, nullptr);
				pex->setNext(nuevo);
			}
		}
	}
	if (dynamic_cast<Daga*>(arma)) {
		if (cantidadYescas() > 2) {
			return;
		}
		NodoA* pex = head;
		NodoA* nuevo = nullptr;
		if (!existe(arma)) {
			if (pex == nullptr) {
				ingresarPrimero((Daga*)arma);
			}
			else {
				while (pex->getNext() != nullptr) {
					pex = pex->getNext();
				}
				nuevo = new NodoA((Daga*)arma, nullptr);
				pex->setNext(nuevo);
			}
		}
	}*/
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

void ListaArmas::eliminar(string tipo) {
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

NodoA* ListaArmas::getNodo(string tipo) {
	NodoA* pex = head;
	while (pex != nullptr) {
		if (pex->getArma()->getTipo() == tipo) {
			return pex;
		}
		pex = pex->getNext();
	}
	return nullptr;
}


int ListaArmas::cantidadBallestas() {
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
int ListaArmas::cantidadEspadas() {
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
int ListaArmas::cantidadYescas() {
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

int ListaArmas::cantidadDagas() {
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

string ListaArmas::imprimirResumen() {
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

string ListaArmas::toString() {
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