#pragma once
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>

//#include "ListaArmas.h"
using namespace std;

#define DELIMITA_CAMPO '\t'
#define DELIMITA_REGISTRO '\n'
 
class Cosa {
protected:
    bool activo;

public:
    Cosa();
    Cosa(bool activo);
    virtual ~Cosa();

    virtual void guardarCosa(ostream& salida) {
        salida << getElemento() << DELIMITA_CAMPO;
        salida << getTipo() << DELIMITA_CAMPO;
        salida << getDanio() << DELIMITA_CAMPO;
        salida << getActivo() << DELIMITA_CAMPO;
        salida << getHp() << DELIMITA_REGISTRO;
    }

    bool getActivo() const;
    void setActivo(bool activo);

    virtual string toString() {
        return " ";
    }

    virtual void setHp(int hp);
    //virtual void setLista() { }

    virtual int getHp();
    //virtual ListaArmas* getListaArmas() { return nullptr; }
    
    virtual string getTipo();
    virtual void eliminarArma(string tipo);

    virtual void curar(Cosa*);
    virtual string getElemento() { return ""; }
    virtual int getDanio();
    virtual void atacar(Cosa* caballero);


};