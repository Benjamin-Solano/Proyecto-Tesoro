#include "Ogro.h"

Ogro::Ogro() {
	setElemento("Tierra");
	setDanio(35);
	setActivo(true);
}

Ogro::~Ogro() {}


string Ogro::toString() {

	stringstream s;
	s << "====== OGRO ======" << endl;
	s << "ATK     : " << getDanio() << endl;
	s << "Elemento: " << getElemento() << endl;
	s << "Estado  : "; if (getActivo()) { s << "Vivo"; }
	else { s << "Muerto"; };
	s << endl;
	s << "==================" << endl;

	return s.str();
}
