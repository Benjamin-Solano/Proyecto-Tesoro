#pragma once
#include "Matriz.h"
#include "windows.h"
#include "fstream"
class Juego {
private:
	Matriz* mat;
	ListaArmas* lista;
	Caballero* caballero;
public:
	Juego();

	void guardarCaballero() {
		fstream strm("..//Caballero.txt", ios::app);
		if (strm.is_open()) {
			caballero->guardar(strm);
			strm.close();
		}	
		strm.close();
	}

	string menu();
};

