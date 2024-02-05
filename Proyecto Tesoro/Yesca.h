#pragma once
#include "Arma.h"
class Yesca : public Arma {
protected:
   
public:
    Yesca();
    Yesca(string id, bool activo)
        :Arma(id, "yesca", "agua", "x", activo) {}

    virtual void guardar(fstream& strm) {
        strm << id << DELIMITADOR_CAMPO;
        strm << activo << DELIMITADOR_REGISTRO;
    }

    static Cosa* recuperar(fstream& strm) {
        string idStr, actStr = "";
        bool activo = false;
        getline(strm, idStr, DELIMITADOR_CAMPO);
        getline(strm, actStr, DELIMITADOR_REGISTRO);

        if (actStr == "1")
            activo = true;

        return new Yesca(idStr, activo);

    }
    static Arma* recuperarlo(fstream& strm, string id) {
        string idStr, actStr = "";
        bool activo = false;
        //getline(strm, idStr, DELIMITADOR_CAMPO);
        getline(strm, actStr, DELIMITADOR_REGISTRO);

        if (actStr == "1")
            activo = true;

        return new Yesca(id, activo);

    }
    ~Yesca();
    string getElemento();
    void setElemento(string elemento);
    virtual string toString();
};


