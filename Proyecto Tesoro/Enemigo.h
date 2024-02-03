#pragma once
#include "Cosa.h"

class Enemigo : public Cosa {
private:
	string elemento;
	int danio;
public:
	Enemigo();
	Enemigo(bool,string, int);
	~Enemigo();

	virtual void setElemento(string nuevoElemento);
	virtual void setDanio(int nuevoDanio);


	virtual string getElemento() ;
	virtual int getDanio();
	virtual void atacar(Cosa*, Enemigo*);



	virtual string toString() = 0;
};