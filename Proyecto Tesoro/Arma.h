#pragma once
#include "Cosa.h"
class Arma : public Cosa {
protected:
    string tipo;

public:
    Arma();
    Arma(bool, string);
    virtual ~Arma();
    string getTipo();
    void setTipo(string tipo);
    virtual string toString();
};