#include "Cofre.h"

Cofre::Cofre() :Cosa("02", true), encontrado(false) { }
void Cofre::setEncontrado(bool a) { encontrado = a; }
bool Cofre::getEncontrado() { return encontrado; }
