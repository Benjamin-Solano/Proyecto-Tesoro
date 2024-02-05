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
    string id;
public:
    Cosa();
    Cosa(string id, bool activo);
    virtual ~Cosa();

    virtual void guardarCosa(fstream& salida) {
        salida << getID() << DELIMITA_CAMPO;
        salida << getElemento() << DELIMITA_CAMPO;
        salida << getTipo() << DELIMITA_CAMPO;
        salida << getDanio() << DELIMITA_CAMPO;
        salida << getActivo() << DELIMITA_CAMPO;
        salida << getHp() << DELIMITA_CAMPO;
        salida << getEncontrado() << DELIMITA_REGISTRO;
    }

    virtual void guardar(fstream& strm) {

    }

    //static Cosa* guardarCosa(fstream& strm) {
        /*string idStr, elementoStr, tipoStr, danioStr, activoStr, hpStr, encStr = "";
        bool act = false;
        bool enc = false;
        getline(strm, idStr, DELIMITA_CAMPO);
        getline(strm, elementoStr, DELIMITA_CAMPO);
        getline(strm, tipoStr, DELIMITA_CAMPO);
        getline(strm, danioStr, DELIMITA_CAMPO);
        getline(strm, activoStr, DELIMITA_CAMPO);
        getline(strm, hpStr, DELIMITA_CAMPO);
        getline(strm, encStr, DELIMITA_REGISTRO);

        if (danioStr == "" || hpStr == "")
            return nullptr;
        if (activoStr == "1")
            act = true;
        if (encStr == "1")
            enc = true;
        int dan = stoi(danioStr);
        int hp = stoi(hpStr);

        if (idStr == "02")
            return new Cofre();

        if (idStr == "03")
            return new Hierba();

        if (idStr == "11")
            return new Gargola();

        if (idStr == "12")
            return new Ogro();

        if (idStr == "13")
            return new Tentaculos();

        if (idStr == "21")
            return new Ballesta();

        if (idStr == "22")
            return new Espada();

        if (idStr == "23")
            return new Yesca();

        if (idStr == "24")
            return new Daga();
        */
   // }

    bool getActivo() const;
    virtual string getID() const;
    void setActivo(bool activo);
    virtual void setID(string id);
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
    virtual bool getEncontrado() { return false; }

};