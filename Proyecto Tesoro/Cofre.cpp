#include "Cofre.h"

Cofre::Cofre() :Cosa(true), encontrado(false) { }
void Cofre::setEncontrado(bool a) { encontrado = a; }
bool Cofre::getEncontrado() { return encontrado; }
