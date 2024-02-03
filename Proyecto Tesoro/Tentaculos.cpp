#include "Tentaculos.h"


Tentaculos::Tentaculos() {
	setElemento("Agua");
	setDanio(20);
	setActivo(true);
}

Tentaculos::~Tentaculos() {}


string Tentaculos::toString() {

	stringstream s;
	s << "==== TENTACULO ====" << endl;
	s << "ATK     : " << getDanio() << endl;
	s << "Elemento: " << getElemento() << endl;
	s << "Estado  : "; if (getActivo()) { s << "Vivo"; }
	else { s << "Muerto"; };
	s << endl;
	s << "===================" << endl;

	return s.str();
}
