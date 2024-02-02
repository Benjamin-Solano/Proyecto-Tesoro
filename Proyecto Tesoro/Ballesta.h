#pragma once
#include "Arma.h"
class Ballesta : public Arma {
protected:
    string elemento;
    string elemento2;

public:
    Ballesta() : Arma(), elemento("x"), elemento2("x") {}

    Ballesta(bool activo, string tipo)
        : Arma(activo, tipo), elemento("aire"), elemento2("x") {
    }
    ~Ballesta() {}
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


