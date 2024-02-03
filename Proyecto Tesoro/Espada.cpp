#include "Espada.h"
Espada::Espada() : Arma(), elemento("x") {}

Espada::Espada(bool activo, string tipo)
    : Arma(activo, tipo), elemento("tierra"), elemento2("agua") {
}
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
