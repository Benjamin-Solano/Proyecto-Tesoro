#include "Ballesta.h"

Ballesta::Ballesta() : Arma(), elemento("x"), elemento2("x") {}

Ballesta::Ballesta(bool activo, string tipo)
    : Arma(activo, tipo), elemento("aire"), elemento2("x") {
}
Ballesta::~Ballesta() {}
string Ballesta::getElemento() { return elemento; }
void Ballesta::setElemento(string elemento) { this->elemento = elemento; }

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