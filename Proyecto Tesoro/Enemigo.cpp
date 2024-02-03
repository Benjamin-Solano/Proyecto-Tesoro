#include "Enemigo.h"

Enemigo::Enemigo() : Cosa(false) {
	elemento = "x";
	danio = 0;
}
Enemigo::Enemigo(bool act, string ele, int atk) : Cosa(act), elemento(ele), danio(atk){ }

void Enemigo::setElemento(string nuevoElemento) { elemento = nuevoElemento; }
void Enemigo::setDanio(int nuevoDanio) { danio = nuevoDanio; }


string Enemigo::getElemento() { return elemento; }
int Enemigo::getDanio() { return danio; }



Enemigo::~Enemigo(){ }


