#pragma once
#include "Ballesta.h"
#include "Espada.h"
#include "Yesca.h"
#include "Daga.h"
#include "ListaArmas.h"
#include "Caballero.h"
#include "Ogro.h"
#include "Gargola.h"
#include "Tentaculos.h"
#include "hierba.h"
#include "Enemigo.h"
#include "Cosa.h"
#include "Cofre.h"

class Matriz
{
private:
	int fil;
	int col;
	Cosa*** mat;
	int f = 0; int c = 0; //lugar actual del caballero

public:
	Matriz();
	Matriz(int x, int y);
	~Matriz();
	Cosa*** getMat() { return mat; }
	int getFil() { return fil; } 
	int getCol() { return col; }
	int getFilActual() { return f; } 
	int getColActual() { return c; }

	void setFilActual(int f) { this->f = f; }
	void setColActual(int c) { this->c = c; }

	Cosa* getPosicionActual() { return mat[f][c]; }

	// 9 x 9: 7 espadas, 6 ballestas, 10 yescas 5 dagas, 
	// 14 tentáculos, 12 ogros, 10 gárgolas, 6 hierbas y el cofre
	//srand (time(NULL));
	//int randX = 0 + rand() % 9;
	//int randY = 0 + rand() % 9;

	void llenar();

	void ingresar7Espadas();
	void ingresar6Ballestas();
	void ingresar10Yescas();
	void ingresar5Dagas();
	void ingresar14Tent();
	void ingresar12ogros();
	void ingresar10Gargolas();
	void ingresar6Hierbas();
	void ingresarCofre();

	void eliminar(Cosa* cosa);
	void eliminar(int x, int y);

	string toString();
	string imprimir();

	void verificar(int x, int y, Caballero* caballero);

	Cosa* getCosa(int x, int y);

	bool esValida(int x, int y);
	bool hayCofre(int x, int y);
	void movimiento(char wasd, Caballero* cab);


};

