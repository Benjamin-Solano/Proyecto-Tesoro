#pragma once
#include "Arma.h"
class Espada : public Arma {
protected:


public:
    Espada();

    ~Espada();
    string getElemento() const;
    void setElemento(string elemento);
    virtual string toString();
};


