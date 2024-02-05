#pragma once
#include "Enemigo.h"

class Ogro : public Enemigo {
public:
	Ogro();

	Ogro(string id, bool activo)
		:Enemigo("12", activo, "Tiera", 35) {}

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

		return new Ogro(id, act);

	}

	~Ogro();
	string toString();
};