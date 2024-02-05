#pragma once
#include "Arma.h"

class Ballesta : public Arma {
protected:
    
public:
    Ballesta();
    Ballesta(string id, bool activo)
        :Arma(id, "ballesta", "aire", "x", activo){}

    virtual void guardar(fstream& strm) {
        strm << id << DELIMITADOR_CAMPO;
        strm << activo << DELIMITADOR_REGISTRO;
    }

    static Cosa* recuperar(fstream& strm, string str) {
        string idStr, actStr = "";
        bool activo = false;
        //getline(strm, idStr, DELIMITADOR_CAMPO);
        getline(strm, actStr, DELIMITADOR_REGISTRO);

        if (actStr == "1")
            activo = true;

        return new Ballesta(str, activo);

    }

    static Arma* recuperarlo(fstream& strm, string str) {
        string idStr, actStr = "";
        bool activo = false;
        //getline(strm, idStr, DELIMITADOR_CAMPO);
        getline(strm, actStr, DELIMITADOR_REGISTRO);

        if (actStr == "1")
            activo = true;

        return new Ballesta(str, activo);

    }

    ~Ballesta();
    string getElemento();
   
    virtual string toString();
};


