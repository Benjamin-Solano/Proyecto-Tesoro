#pragma once
#include "Cosa.h"
class Arma : public Cosa {
protected:
    string tipo;

public:
    Arma() { tipo = "x"; }
    Arma(bool activo, string tipo)
        : Cosa(activo), tipo(tipo) {}
    virtual ~Arma() {}
    string getTipo() const { return tipo; }
    void setTipo(string tipo) { this->tipo = tipo; }

    virtual string toString() {
        return "aa";
    }
};