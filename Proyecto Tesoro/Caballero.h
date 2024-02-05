#pragma once
#include "Cosa.h"
#include "ListaArmas.h"

#define DELIMITA_CAMPO '\t'
#define DELIMITA_REGISTRO '\n'

class Caballero : public Cosa {
private:
	int hp;
	ListaArmas* lista;
public:

	virtual void guardar(fstream& salida) {
		salida << id << DELIMITADOR_CAMPO;	
		salida << hp << DELIMITADOR_CAMPO;	
		salida << activo << DELIMITA_REGISTRO;	
	}
	static Cosa* recuperar(fstream& strm, string str) {
		string idStr, hpStr, actStr = "";
		bool act = false;
		//getline(strm, idStr, DELIMITADOR_CAMPO);
		getline(strm, hpStr, DELIMITADOR_CAMPO);
		getline(strm, actStr, DELIMITADOR_REGISTRO);

		if (hpStr == "")
			return nullptr;
		int hp = stoi(hpStr);

		if (actStr == "1")
			act = true;

		//ListaArmas* lista = new ListaArmas(ListaArmas::recuperar());
		return new Caballero(str, hp, act);

	}

	Caballero();
	Caballero(ListaArmas* lista, bool activo);

	Caballero(string id, int hp, bool act)
		:Cosa(id, act), lista(nullptr), hp(hp) {}


	Caballero(Caballero* cab) {
		lista = new ListaArmas(cab->getListaArmas());
		hp = cab->getHp();
	}
	~Caballero();
	string getTipo() { return "Caballero"; }
	void setHp(int hp);
	void setLista(ListaArmas* lista);
	int getHp();
	ListaArmas* getListaArmas();
	string toString();
	void eliminarArma(string tipo);
};

