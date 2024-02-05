#pragma once
#include "Arma.h"
class Espada : public Arma {
protected:


public:
    Espada();
    Espada(string id, bool activo)
        :Arma(id, "espada", "tierra", "agua", activo) {}

    virtual void guardar(fstream& strm) {
        strm << id << DELIMITADOR_CAMPO;
        strm << activo << DELIMITADOR_REGISTRO;
    }

    static Cosa* recuperar(fstream& strm, string id) {
        string idStr, actStr = "";
        bool activo = false;
        //getline(strm, idStr, DELIMITADOR_CAMPO);
        getline(strm, actStr, DELIMITADOR_REGISTRO);

        if (actStr == "1")
            activo = true;

        return new Espada(id, activo);

    }
    static Arma* recuperarlo(fstream& strm, string id) {
        string idStr, actStr = "";
        bool activo = false;
       // getline(strm, idStr, DELIMITADOR_CAMPO);
        getline(strm, actStr, DELIMITADOR_REGISTRO);

        if (actStr == "1")
            activo = true;

        return new Espada(id, activo);

    }
    ~Espada();

    string getElemento() const;
    void setElemento(string elemento);
    virtual string toString();
};


