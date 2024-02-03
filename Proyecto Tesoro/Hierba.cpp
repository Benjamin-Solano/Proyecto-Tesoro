#include "hierba.h"

Hierba::Hierba() { 
	activo = true;
	vida_restaurada = 15;
}
Hierba::~Hierba() { }

void Hierba::setEstado(bool nuevoEstado) { activo = false; }
void Hierba::setHp() { getHp() + vida_restaurada; }

string Hierba::toString(){
	stringstream s;
	s << "==== HIERBA MEDICINAL ====" << endl;
	s << "Vida restaurada: " << vida_restaurada << endl;
	s << "==========================" << endl;
	return s.str();
}