#include "Cosa.h"
Cosa::Cosa() {id="0", activo = true; }
Cosa::Cosa(string id, bool activo) : id(id), activo(activo) {}
Cosa:: ~Cosa() {}
bool Cosa::getActivo() const { return activo; }
string Cosa::getID() const { return id; }
void Cosa::setActivo(bool activo) { this->activo = activo; }

void Cosa::setID(string id) { this->id = id; }


void Cosa::setHp(int hp) { }
//virtual void setLista() { }

int Cosa::getHp() { return 100; }
//virtual ListaArmas* getListaArmas() { return nullptr; }

string Cosa::getTipo() {
    return "";
}

void Cosa::eliminarArma(string tipo) { }

void Cosa::curar(Cosa*) { }

int Cosa::getDanio()
{
    return 0;
}

void Cosa::atacar(Cosa* caballero)
{
}

