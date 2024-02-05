#include "Ballesta.h"

Ballesta::Ballesta() : Arma("21", "ballesta", "aire", "x", true) {}


Ballesta::~Ballesta() {}
string Ballesta::getElemento() { return elemento; }


string Ballesta::toString() {
    stringstream s;
    s << "-------------------" << endl;
    s << "Arma:     " << tipo << endl;
    s << "Elemento: " << elemento << endl;
    if (elemento2 != "x") {
        s << "          " << elemento2 << endl;
    }
    s << "-------------------" << endl;
    return s.str();
}