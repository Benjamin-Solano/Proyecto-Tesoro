#pragma once
#include "Cosa.h"
#include "Caballero.h"

class Hierba : public Cosa {
private:
	int vida_restaurada;
	string elemento;
public:
	Hierba();

	Hierba(string id, int vida, string elemento, bool activo)
		:Cosa(id, activo), elemento(elemento), vida_restaurada(vida){}

	Hierba(string id, bool activo)
		:Cosa(id, activo), elemento("curativo"), vida_restaurada(15) {}

	virtual void guardar(fstream& strm) {
		strm << id << DELIMITADOR_CAMPO;
		strm << activo << DELIMITADOR_REGISTRO;
	}

	static Cosa* recuperar(fstream& strm, string id) {
		string idStr, actStr = "";
		bool activo = false;
		//getline(strm, idStr, DELIMITADOR_CAMPO);
		getline(strm, actStr, DELIMITADOR_REGISTRO);

		if (actStr == "1")
			activo = true;

		return new Hierba(id, activo);

	}

	~Hierba();
	string getElemento() { return elemento; }
	void setEstado(bool);
	void setHp();
	void curar(Cosa*);
	string toString();

	


};