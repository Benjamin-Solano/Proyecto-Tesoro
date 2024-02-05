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
		ofstream salida;
		string rutaArchivo = "..//Caballero.txt";
		salida.open(rutaArchivo.c_str());
		caballero->guardarC(salida);
		salida.close();
	}

	string menu();
};

