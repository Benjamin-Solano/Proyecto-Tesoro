#include "Yesca.h"
Yesca::Yesca() : Arma(true, "yesca", "agua", "x") {}

Yesca::~Yesca() {}
string Yesca::getElemento() { return elemento; }
void Yesca::setElemento(string elemento) { this->elemento = elemento; }

string Yesca::toString() {
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
