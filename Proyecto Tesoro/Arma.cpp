#include "Arma.h"


Arma::Arma() { activo = true; tipo = "x"; elemento = "x"; elemento2 = "x"; }

Arma::Arma(bool activo, string tipo, string elemento, string elemento2)
{
    this->activo = activo;
    this->tipo = tipo;
    this->elemento = elemento;
    this->elemento2 = elemento2;

}

Arma:: ~Arma() {}
string Arma::getTipo() { return tipo; }
void Arma::setTipo(string tipo) { this->tipo = tipo; }

string Arma::toString() {
    return "aa";
}