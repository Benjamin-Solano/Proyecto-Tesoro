#pragma once
#include "Matriz.h"
class Juego
{
private:
	Matriz* mat;
	ListaArmas* lista;
	Cosa* caballero;

public:

	Juego() {
		mat = new Matriz();
		lista = new ListaArmas();
		caballero = new Caballero(lista, true);

	}

	void moverse() {
		


	}


};

