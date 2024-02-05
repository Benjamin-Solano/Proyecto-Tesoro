#pragma once
#include "Enemigo.h"

class Gargola : public Enemigo {
public:
	Gargola();
	Gargola(string id, bool activo)
		:Enemigo("11",activo, "Aire", 40){}

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

		return new Gargola(id, act);
	}

	~Gargola();
	string toString();
};