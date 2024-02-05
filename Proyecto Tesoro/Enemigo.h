#pragma once
#include "Cosa.h"

class Enemigo : public Cosa {
private:
	string elemento;
	int danio;
public:
	Enemigo();
	Enemigo(string id, bool act, string ele, int atk);
	~Enemigo();

	virtual void setElemento(string nuevoElemento);
	virtual void setDanio(int nuevoDanio);


	virtual string getElemento();
	virtual int getDanio();
	virtual void atacar(Cosa* caballero);

	virtual void guardar(fstream& strm) {
		strm << id << DELIMITA_CAMPO;
		strm << elemento << DELIMITA_CAMPO;
		strm << danio << DELIMITA_CAMPO;
		strm << activo << DELIMITA_REGISTRO;
	}

	


	virtual string toString() = 0;
};