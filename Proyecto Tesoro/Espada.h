#pragma once
#include "Arma.h"
class Espada : public Arma {
protected:
    string elemento;
    string elemento2;

public:
    Espada() : Arma(), elemento("x") {}

    Espada(bool activo, string tipo)
        : Arma(activo, tipo), elemento("tierra"), elemento2("agua") {
    }
    ~Espada() {}
    string getElemento() const { return elemento; }
    void setElemento(string elemento) { this->elemento = elemento; }

    virtual string toString() {
        stringstream s;
        s << "-------------------" << endl;
        s << "Arma:     " << tipo << endl;
        s << "Elemento: " << elemento << endl;
        if (elemento2 != "x") {
            s << "          " << elemento2 << endl;
        }
        s << "-------------------" << endl;
        return s.str();
    }



};


