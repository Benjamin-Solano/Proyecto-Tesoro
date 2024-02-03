#include "Espada.h"
Espada::Espada() : Arma(true,"espada", "tierra", "agua") {}


Espada::~Espada() {}
string Espada::getElemento() const { return elemento; }
void Espada::setElemento(string elemento) { this->elemento = elemento; }

string Espada::toString() {
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
