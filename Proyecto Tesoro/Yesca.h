#pragma once
#include "Arma.h"
class Yesca : public Arma {
protected:
    string elemento;
    string elemento2;

public:
    Yesca() : Arma(), elemento("x") {}

    Yesca(bool activo, string tipo)
        : Arma(activo, tipo), elemento("agua"), elemento2("x") {
    }
    ~Yesca() {}
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


