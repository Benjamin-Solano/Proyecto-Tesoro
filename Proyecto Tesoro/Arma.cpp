#include "Arma.h"


Arma::Arma() { id = "2"; activo = true; tipo = "x"; elemento = "x"; elemento2 = "x"; }

Arma::Arma(string id, string tipo, string elemento, string elemento2, bool activo)
{
    this->id = id;
    this->activo = activo;
    this->tipo = tipo;
    this->elemento = elemento;
    this->elemento2 = elemento2;

}

Arma:: ~Arma() {}
string Arma::getTipo() { return tipo; }
string Arma::getElemento()
{
    return elemento;
}
string Arma::getElemento2()
{
    return elemento2;
}
void Arma::setTipo(string tipo) { this->tipo = tipo; }

string Arma::toString() { return "Prototipo Arma"; }