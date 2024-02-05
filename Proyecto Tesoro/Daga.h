#pragma once
#include "Arma.h"
class Daga : public Arma {
protected:


public:
    Daga();
    Daga(string id, bool activo)
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

        return new Daga(id, activo);

    }
    static Arma* recuperarlo(fstream& strm, string id) {
        string idStr, actStr = "";
        bool activo = false;
        //getline(strm, idStr, DELIMITADOR_CAMPO);
        getline(strm, actStr, DELIMITADOR_REGISTRO);

        if (actStr == "1")
            activo = true;

        return new Daga(id, activo);

    }
    ~Daga();
    string getElemento() const;
    string getElemento2() const;
   
    virtual string toString();


};


