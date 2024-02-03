#pragma once
#include "Cosa.h"
class Arma : public Cosa {
protected:
    string tipo;//era por si no servia el dynamic cast pero lo dejo porque me da pereza quitarlo :p
    string elemento;
    string elemento2;
public:
    Arma();
    Arma(bool activo, string tipo, string elemento, string elemento2);
    
    virtual ~Arma();
    string getTipo();
    virtual string getElemento();
    virtual string getElemento2();
    void setTipo(string tipo);
    virtual string toString();
};