#pragma once
#include "Arma.h"
class Yesca : public Arma {
protected:
    string elemento;
    string elemento2;
public:
    Yesca();
    Yesca(bool activo, string tipo);
    ~Yesca();
    string getElemento() const;
    void setElemento(string elemento);
    virtual string toString();
};


