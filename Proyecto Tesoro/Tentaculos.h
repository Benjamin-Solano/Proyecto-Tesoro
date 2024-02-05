#pragma once
#include "Enemigo.h"

class Tentaculos : public Enemigo {
public:
	Tentaculos();
	Tentaculos(string id, bool activo)
		:Enemigo("13", activo, "Agua", 20) {}

	virtual void guardar(fstream& strm) {
		strm << id << DELIMITA_CAMPO;
		strm << activo << DELIMITA_REGISTRO;
	}

	static Cosa* recuperar(fstream& strm, string id) {
		string idStr, actStr = "";
		bool act = false;
		//getline(strm, idStr, DELIMITA_CAMPO);
		getline(strm, actStr, DELIMITA_REGISTRO);

		if (actStr == "1")
			act = true;

		return new Tentaculos(id, act);

	}

	~Tentaculos();
	string toString();
};