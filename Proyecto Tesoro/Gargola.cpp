#include "Gargola.h"


Gargola::Gargola() {
	setID("11");
	setElemento("Aire");
	setDanio(40);
	setActivo(true);
}

Gargola::~Gargola() {}

string Gargola::toString() {

	stringstream s;
	s << "===== GARGOLA ====" << endl;
	s << "ATK     : " << getDanio() << endl;
	s << "Elemento: " << getElemento() << endl;
	s << "Estado  : "; if (getActivo()) { s << "Vivo"; }
	else { s << "Muerto"; };
	s << endl;
	s << "==================" << endl;

	return s.str();
}
