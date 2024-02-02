#pragma once
#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Elemento {
private:
	string identificacion; // Todo elemento en un videojuego tiene un codigo/identificacion
public:
	Elemento(string id) : identificacion(id) {}
	~Elemento() { }
	// set
	void setIdentificacion(string nuevaID) { identificacion = nuevaID; }
	// get
	string getIdentificacion() { return identificacion; }

	virtual string toString() = 0;
};
