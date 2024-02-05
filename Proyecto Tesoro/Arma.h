#pragma once
#include "Cosa.h"

#define DELIMITADOR_CAMPO '\t'
#define DELIMITADOR_REGISTRO '\n'

class Arma : public Cosa {
protected:
    string tipo;//para la lista. podria no usarse, pero ya que jaja
    string elemento;
    string elemento2;
public:

    virtual void guardar(ostream& salida) {
        salida << tipo << DELIMITADOR_CAMPO;
        salida << elemento << DELIMITADOR_CAMPO;
        salida << elemento2 << DELIMITADOR_REGISTRO;
    }

    Arma();
    Arma(bool activo, string tipo, string elemento, string elemento2);
    Arma(Arma* arma) {
        tipo = arma->getTipo();
        elemento = arma->getElemento();
        elemento2 = arma->getElemento2();
    }
    
    virtual ~Arma();
    string getTipo();
    virtual string getElemento();
    virtual string getElemento2();
    void setTipo(string tipo);
    virtual string toString();
};