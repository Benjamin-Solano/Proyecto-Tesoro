#include "Enemigo.h"

Enemigo::Enemigo() : Cosa("1", false) {
	elemento = "x";
	danio = 0;
}
Enemigo::Enemigo(string id, bool act, string ele, int atk) : Cosa("1", act), elemento(ele), danio(atk) { }

void Enemigo::setElemento(string nuevoElemento) { elemento = nuevoElemento; }
void Enemigo::setDanio(int nuevoDanio) { danio = nuevoDanio; }


string Enemigo::getElemento() { return elemento; }
int Enemigo::getDanio() { return danio; }

void Enemigo::atacar(Cosa* caballero) {
	if (caballero->getHp() - danio <= 0) {
		caballero->setHp(0); return;
	}
	caballero->setHp(caballero->getHp() - danio);
}


Enemigo::~Enemigo(){ }


