#pragma once
#include "Cosa.h"

class Cofre: public Cosa{
private:
	bool encontrado;
public:
	Cofre();
	Cofre(string id, bool encontrado, bool activo)
		:Cosa(id, activo), encontrado(encontrado){}

	void setEncontrado(bool a);
	bool getEncontrado();
	virtual string getTipo(){
		return "Cofre";
	}
	virtual void guardarC(fstream& salida) {
		salida << id << DELIMITA_CAMPO;
		salida << encontrado << DELIMITA_CAMPO;
		salida << activo << DELIMITA_REGISTRO;
	}
	static Cosa* recuperar(fstream& strm, string id) {
		string idStr, encStr, actStr = "";
		bool act = false;
		//getline(strm, idStr, DELIMITA_CAMPO);
		getline(strm, encStr, DELIMITA_CAMPO);
		getline(strm, actStr, DELIMITA_REGISTRO);
		if (actStr == "1")
			act = true;

		return new Cofre(id, false, true);
	}


};

