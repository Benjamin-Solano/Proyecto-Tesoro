#include "Daga.h"
Daga::Daga() : Arma(), elemento("x") {}

Daga::Daga(bool activo, string tipo)
    : Arma(activo, tipo), elemento("tierra"), elemento2("x") {
}
Daga::~Daga() {}
string Daga::getElemento() const { return elemento; }
string Daga::getElemento2() const { return elemento2; }
void Daga::setElemento(string elemento) { this->elemento = elemento; }
void Daga::setElemento2(string elemento2) { this->elemento2 = elemento2; }

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
