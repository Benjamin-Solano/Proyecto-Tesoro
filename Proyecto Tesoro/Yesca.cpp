#include "Yesca.h"
Yesca::Yesca() : Arma(), elemento("x") {}

Yesca::Yesca(bool activo, string tipo)
    : Arma(activo, tipo), elemento("agua"), elemento2("x") {
}
Yesca::~Yesca() {}
string Yesca::getElemento() const { return elemento; }
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
