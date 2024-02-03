#pragma once
#include "Arma.h"
class Daga : public Arma {
protected:
    string elemento;
    string elemento2;

public:
    Daga();
    Daga(bool activo, string tipo);
    ~Daga();
    string getElemento() const;
    string getElemento2() const;
    void setElemento(string elemento);
    void setElemento2(string elemento2);
    virtual string toString();


};


