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
#include "fstream"



class Matriz
{
private:
	int fil;
	int col;
	Cosa*** mat;
	int f = 0; int c = 0; //lugar actual del caballero

public:

	virtual void guardarMatriz() {
		fstream strm("..//Matriz.txt", ios::app);
		
		if (strm.is_open()) {
			for (int i = 0; i < fil; i++) {
				for (int j = 0; j < col; j++) {
					if (mat[i][j] != nullptr) {
						mat[i][j]->guardar(strm);
					}
				}
			}
			strm.close();
		}
		

	}

	static Matriz* recuperarMatriz() {
		int x = true;
		fstream strm("..//Matriz.txt", ios::in);
		if (strm.is_open()) {

			Matriz* list = new Matriz();

			do {
				string idStr = "";
				getline(strm, idStr, DELIMITA_CAMPO);
				if (idStr == "01") {
					if (Cosa* cosa = Caballero::recuperar(strm, idStr)) {
						if (cosa == nullptr) {
							x = false; break;
						}
						list->ingresar(cosa);
					}
				}
				if (idStr == "02") {
					if (Cosa* cosa = Cofre::recuperar(strm, idStr)) {
						if (cosa == nullptr) {
							x = false; break;
						}
						list->ingresar(cosa);
					}
				}
				if (idStr == "03") {
					if (Cosa* cosa = Hierba::recuperar(strm, idStr)) {
						if (cosa == nullptr) {
							x = false; break;
						}
						list->ingresar(cosa);
					}
				}
				if (idStr == "11") {
					if (Cosa* cosa = Gargola::recuperar(strm, idStr)) {
						if (cosa == nullptr) {
							x = false; break;
						}
						list->ingresar(cosa);
					}
				}
				if (idStr == "12") {
					if (Cosa* cosa = Ogro::recuperar(strm, idStr)) {
						if (cosa == nullptr) {
							x = false; break;
						}
						list->ingresar(cosa);
					}
				}
				if (idStr == "12") {
					if (Cosa* cosa = Tentaculos::recuperar(strm, idStr)) {
						if (cosa == nullptr) {
							x = false; break;
						}
						list->ingresar(cosa);
					}
				}
				if (idStr == "21") {
					if (Cosa* arma = Ballesta::recuperarlo(strm, idStr)) {
						if (arma == nullptr) {
							x = false; break;
						}
						list->ingresar(arma);
					}
				}
				if (idStr == "22") {
					if (Cosa* arma = Espada::recuperarlo(strm, idStr)) {
						if (arma == nullptr) {
							x = false; break;
						}
						list->ingresar(arma);
					}
				}
				if (idStr == "23") {
					if (Cosa* arma = Yesca::recuperarlo(strm, idStr)) {
						if (arma == nullptr) {
							x = false; break;
						}
						list->ingresar(arma);
					}
				}
				if (idStr == "24") {
					if (Cosa* arma = Daga::recuperarlo(strm, idStr)) {
						if (arma == nullptr) {
							x = false; break;
						}
						list->ingresar(arma);
					}
				}
				if (idStr == "")
					x = false;

			} while (x == true);

			list->getMat()[0][0] = nullptr;
			return list;
			strm.close();
		}


	}

	void ingresar(Cosa* c) {	
		for (int i = 0; i < fil; i++) {
			for (int j = 0; j < col; j++) {
				if (mat[i][j] != nullptr) {
					//delete mat[i][j];
					mat[i][j] == nullptr;
				}		
				mat[i][j] = c; return;
			}
		}
	}

	Matriz();
	Matriz(Matriz* matr) {
		for (int i = 0; i < matr->getFil(); i++) {
			for (int j = 0; j < matr->getCol(); j++) {
				//if (mat[i][j] != nullptr || matr->getMat()[i][j] != nullptr) {
					mat[i][j] = matr->getMat()[i][j];
				//}
				
			}
		}
	}


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

