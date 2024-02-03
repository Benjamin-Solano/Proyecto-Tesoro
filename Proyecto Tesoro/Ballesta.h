#pragma once
#include "Arma.h"

class Ballesta : public Arma {
protected:
    string elemento;
    string elemento2;
public:
    Ballesta();
    Ballesta(bool activo, string tipo);
    ~Ballesta();
    string getElemento();
    void setElemento(string elemento);
    virtual string toString();
};


