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
    Cosa();
    Cosa(bool activo);
    virtual ~Cosa();
    bool getActivo() const;
    void setActivo(bool activo);

    virtual string toString();

    virtual void setHp(int hp);
    //virtual void setLista() { }

    virtual int getHp();
    //virtual ListaArmas* getListaArmas() { return nullptr; }
    
    virtual string getTipo();
    virtual void eliminarArma(string tipo);

    virtual void curar(Cosa*);

    virtual int getDanio();
    virtual void atacar(Cosa* caballero);


};