#include "Cosa.h"
Cosa::Cosa() { activo = true; }
Cosa::Cosa(bool activo) : activo(activo) {}
Cosa:: ~Cosa() {}
bool Cosa::getActivo() const { return activo; }
void Cosa::setActivo(bool activo) { this->activo = activo; }

string Cosa::toString() {
    return "aa";
}

void Cosa::setHp(int hp) { }
//virtual void setLista() { }

int Cosa::getHp() { return 100; }
//virtual ListaArmas* getListaArmas() { return nullptr; }

void Cosa::eliminarArma(string tipo) { }

void Cosa::curar(Cosa*) { }
