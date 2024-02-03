#include "hierba.h"

Hierba::Hierba() { 
	activo = true;
	vida_restaurada = 15;
}
Hierba::~Hierba() { }

void Hierba::setEstado(bool nuevoEstado) { activo = false; }
void Hierba::setHp() { getHp() + vida_restaurada; }

void Hierba::curar(Cosa* caballero) {
	caballero->setHp(caballero->getHp() + vida_restaurada);
}

string Hierba::toString(){
	stringstream s;
	s << "==== HIERBA MEDICINAL ====" << endl;
	s << "Efecto: +" << vida_restaurada <<" HP" << endl;
	s << "==========================" << endl;
	return s.str();
}