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

    virtual void guardar(fstream& strm) {
        strm << id << DELIMITADOR_CAMPO;
        strm << tipo << DELIMITADOR_CAMPO;
        strm << elemento << DELIMITADOR_CAMPO;
        strm << elemento2 << DELIMITADOR_CAMPO;
        strm << activo << DELIMITADOR_REGISTRO;
    }

    static Cosa* recuperar(fstream& strm, string str) {
        string idStr, tipoStr, elemStr, elem2Str, actStr = "";
        bool activo = false;
       // getline(strm, idStr, DELIMITADOR_CAMPO);
        getline(strm, tipoStr, DELIMITADOR_CAMPO);
        getline(strm, elemStr, DELIMITADOR_CAMPO);
        getline(strm, elem2Str, DELIMITADOR_CAMPO);
        getline(strm, actStr, DELIMITADOR_REGISTRO);
       
        if (actStr == "1")
            activo = true;

        return new Arma(str, tipoStr, elemStr, elem2Str, activo);

    }


    Arma();
    Arma(string id, string tipo, string elemento, string elemento2, bool activo);

  /*  Arma(string id, bool activo, string tipo, string elemento, string elemento2)
        :Cosa(id, activo), tipo(tipo), elemento(elemento), elemento2(elemento2){}*/

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