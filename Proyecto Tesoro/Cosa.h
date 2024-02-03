#pragma once
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
//#include "ListaArmas.h"
using namespace std;

class Cosa {
protected:
    bool activo;

public:
    Cosa() { activo = true; }
    Cosa(bool activo) : activo(activo) {}
    virtual ~Cosa() {}
    bool getActivo() const { return activo; }
    void setActivo(bool activo) { this->activo = activo; }

    virtual string toString() {
        return "aa";
    }

    virtual void setHp() { }
    //virtual void setLista() { }

    virtual int getHp() { return 100; }
    //virtual ListaArmas* getListaArmas() { return nullptr; }

    virtual void eliminarArma(string tipo) { }

};