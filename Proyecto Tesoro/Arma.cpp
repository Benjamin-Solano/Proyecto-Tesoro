#include "Arma.h"


Arma::Arma() { tipo = "x"; }
Arma::Arma(bool activo, string tipo)
    : Cosa(activo), tipo(tipo) {}
Arma:: ~Arma() {}
string Arma::getTipo() { return tipo; }
void Arma::setTipo(string tipo) { this->tipo = tipo; }

string Arma::toString() {
    return "aa";
}