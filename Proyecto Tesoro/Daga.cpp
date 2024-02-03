#include "Daga.h"
Daga::Daga() : Arma(true,"daga", "tierra", "x") {}


Daga::~Daga() {}
string Daga::getElemento() const { return elemento; }
string Daga::getElemento2() const { return elemento2; }

string Daga::toString() {
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
