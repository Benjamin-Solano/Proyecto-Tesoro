#pragma once
#include "Arma.h"
class Espada : public Arma {
protected:
    string elemento;
    string elemento2;

public:
    Espada();
    Espada(bool activo, string tipo);
    ~Espada();
    string getElemento() const;
    void setElemento(string elemento);
    virtual string toString();
};


