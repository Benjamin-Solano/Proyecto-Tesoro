#pragma once
#include "Arma.h"
class Daga : public Arma {
protected:
    string elemento;
    string elemento2;

public:
    Daga() : Arma(), elemento("x") {}

    Daga(bool activo, string tipo)
        : Arma(activo, tipo), elemento("tierra"), elemento2("x") {
    }
    ~Daga() {}
    string getElemento() const { return elemento; }
    string getElemento2() const { return elemento2; }
    void setElemento(string elemento) { this->elemento = elemento; }
    void setElemento2(string elemento2) { this->elemento2 = elemento2; }

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


