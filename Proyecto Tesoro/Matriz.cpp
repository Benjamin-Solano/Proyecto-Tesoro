#include "Matriz.h"

Matriz::Matriz()
{
	f = 0;c = 0;
	fil = 9; col = 9;
	mat = new Cosa * *[fil];
	for (int i = 0; i < fil; i++) {
		mat[i] = new Cosa * [col];
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			mat[i][j] = nullptr;
		}
	}

	ingresar7Espadas();
	ingresar6Ballestas();
	ingresar10Yescas();
	ingresar5Dagas();
	ingresar14Tent();
	ingresar12ogros();
	ingresar10Gargolas();
	ingresar6Hierbas();
	ingresarCofre();
	
}

Matriz::Matriz(int x, int y)
{
	//para probar el correcto funcionamiento
	fil = x; col = y;
	mat = new Cosa * *[fil];
	for (int i = 0; i < fil; i++) {
		mat[i] = new Cosa * [col];
	}
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			mat[i][j] = nullptr;
		}
	}

	// TEST
	mat[0][0] = new Espada();
	mat[0][1] = new Ogro();
	mat[1][0] = new Gargola();
	mat[1][1] = new Ballesta();


}

Matriz::~Matriz()
{
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			delete mat[i][j];
		}
	}
	for (int i = 0; i < fil; i++) {
		delete mat[i];
	}
	delete[] mat;
}

void Matriz::llenar()
{
	
}

void Matriz::ingresar7Espadas()
{
	srand(time(NULL));

	int cont = 0;

	do {
		int randX = 0 + rand() % 9;
		int randY = 0 + rand() % 9;
		if (mat[randX][randY] == nullptr && (randX != 0 || randY != 0)) {
			//cout << randX << " -- " << randY << endl;
			mat[randX][randY] = new Espada();
			cont++;
		}
	} while (cont < 7);




}

void Matriz::ingresar6Ballestas()
{
	srand(time(NULL));

	int cont = 0;

	do {
		int randX = 0 + rand() % 9;
		int randY = 0 + rand() % 9;
		if (mat[randX][randY] == nullptr && (randX != 0 || randY != 0)) {
			//cout << randX << " -- " << randY << endl;
			mat[randX][randY] = new Ballesta();
			cont++;
		}
	} while (cont < 6);
}

void Matriz::ingresar10Yescas()
{
	srand(time(NULL));

	int cont = 0;

	do {
		int randX = 0 + rand() % 9;
		int randY = 0 + rand() % 9;
		if (mat[randX][randY] == nullptr && (randX != 0 || randY != 0)) {
			//cout << randX << " -- " << randY << endl;
			mat[randX][randY] = new Yesca();
			cont++;
		}
	} while (cont < 10);
}

void Matriz::ingresar5Dagas()
{
	srand(time(NULL));

	int cont = 0;

	do {
		int randX = 0 + rand() % 9;
		int randY = 0 + rand() % 9;
		if (mat[randX][randY] == nullptr && (randX != 0 || randY != 0)) {
			//cout << randX << " -- " << randY << endl;
			mat[randX][randY] = new Daga();
			cont++;
		}
	} while (cont < 5);
}

void Matriz::ingresar14Tent()
{
	srand(time(NULL));

	int cont = 0;

	do {
		int randX = 0 + rand() % 9;
		int randY = 0 + rand() % 9;
		if (mat[randX][randY] == nullptr && (randX != 0 || randY != 0)) {
			//cout << randX << " -- " << randY << endl;
			mat[randX][randY] = new Tentaculos();
			cont++;
		}
	} while (cont < 10);
}

void Matriz::ingresar12ogros()
{
	srand(time(NULL));

	int cont = 0;

	do {
		int randX = 0 + rand() % 9;
		int randY = 0 + rand() % 9;
		if (mat[randX][randY] == nullptr && (randX != 0 || randY != 0)) {
			//cout << randX << " -- " << randY << endl;
			mat[randX][randY] = new Ogro();
			cont++;
		}
	} while (cont < 10);
}

void Matriz::ingresar10Gargolas()
{
	srand(time(NULL));

	int cont = 0;

	do {
		int randX = 0 + rand() % 9;
		int randY = 0 + rand() % 9;
		if (mat[randX][randY] == nullptr && (randX != 0 || randY != 0)) {
			//cout << randX << " -- " << randY << endl;
			mat[randX][randY] = new Gargola();
			cont++;
		}
	} while (cont < 10);
}

void Matriz::ingresar6Hierbas()
{
	srand(time(NULL));

	int cont = 0;

	do {
		int randX = 0 + rand() % 9;
		int randY = 0 + rand() % 9;
		if (mat[randX][randY] == nullptr && (randX != 0 || randY != 0)) {
			//cout << randX << " -- " << randY << endl;
			mat[randX][randY] = new Hierba();
			cont++;
		}
	} while (cont < 6);
}

void Matriz::ingresarCofre()
{
	srand(time(NULL));

	int cont = 0;

	do {
		int randX = 0 + rand() % 9;
		int randY = 0 + rand() % 9;
		if (mat[randX][randY] == nullptr && (randX!=0 || randY!=0)) {
			//cout << randX << " -- " << randY << endl;
			mat[randX][randY] = new Cofre();
			cont++;
		}
	} while (cont < 1);
}

void Matriz::eliminar(Cosa* cosa)
{

	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			if (mat[i][j] != nullptr) {
				delete mat[i][j];
				mat[i][j] = nullptr;
			}
				
		}
	}
}

void Matriz::eliminar(int x, int y)
{
	if (x > fil || x<0 || y>fil || x < y)
		return;

	if (mat[x][y] != nullptr) {
		delete mat[x][y];
		mat[x][y] = nullptr;
	}
}

string Matriz::toString()
{
	stringstream s;

	for (int i = 0;i < fil;i++) {
		for (int j = 0; j < col; j++) {
			if (dynamic_cast<Espada*>(mat[i][j]))
				s << " [ E ] ";

			if (dynamic_cast<Ballesta*>(mat[i][j]))
				s << " [ B ] ";

			if (dynamic_cast<Yesca*>(mat[i][j]))
				s << " [ Y ] ";

			if (dynamic_cast<Daga*>(mat[i][j]))
				s << " [ D ] ";

			if (dynamic_cast<Hierba*>(mat[i][j]))
				s << " [ H ] ";

			if (dynamic_cast<Gargola*>(mat[i][j]))
				s << " [ G ] ";

			if (dynamic_cast<Ogro*>(mat[i][j]))
				s << " [ O ] ";

			if (dynamic_cast<Tentaculos*>(mat[i][j]))
				s << " [ T ] ";

			if (dynamic_cast<Cofre*>(mat[i][j]))
				s << " [ $ ] ";

			if (mat[i][j] == nullptr)
				s << " [   ] ";
		}
		s << '\n';
	}
	s << '\n';



	return s.str();
}

string Matriz::imprimir()
{
	stringstream s;



	for (int i = 0;i < fil;i++) {
		for (int j = 0; j < col; j++) {
			if (dynamic_cast<Espada*>(mat[i][j]))
				s << " [ E ] ";

			if (dynamic_cast<Ballesta*>(mat[i][j]))
				s << " [ B ] ";

			if (dynamic_cast<Yesca*>(mat[i][j]))
				s << " [ Y ] ";

			if (dynamic_cast<Daga*>(mat[i][j]))
				s << " [ D ] ";

			if (dynamic_cast<Hierba*>(mat[i][j]))
				s << " [ H ] ";

			if (dynamic_cast<Gargola*>(mat[i][j]))
				s << " [ G ] ";

			if (dynamic_cast<Ogro*>(mat[i][j]))
				s << " [ O ] ";

			if (dynamic_cast<Tentaculos*>(mat[i][j]))
				s << " [ T ] ";

			if (dynamic_cast<Cofre*>(mat[i][j]))
				s << " [ $ ] ";

			if (mat[i][j] == nullptr)
				s << " [   ] ";

			if(dynamic_cast<Caballero*>(mat[i][j]))
				s << "  {:b  ";
			

		}
		s << '\n';
	}
	s << '\n';

	return s.str();
}


void Matriz::verificar(int x, int y, Caballero* caballero)
{
	if (mat[x][y] == nullptr) {
		cout << "no hay nada!" << endl;
		return;
	}

	if (dynamic_cast<Arma*>(mat[x][y])) {
		if (mat[x][y]->getTipo() == "ballesta") {
			caballero->getListaArmas()->ingresarUltimo((Ballesta*)mat[x][y]);
			cout << "recibio un arma: " << mat[x][y]->getTipo() << endl;
			delete mat[x][y]; mat[x][y] = nullptr;
			return;
		}
		if (mat[x][y]->getTipo() == "espada") {
			caballero->getListaArmas()->ingresarUltimo((Espada*)mat[x][y]);
			cout << "recibio un arma: " << mat[x][y]->getTipo() << endl;
			delete mat[x][y]; mat[x][y] = nullptr;
			return;
		}
		if (mat[x][y]->getTipo() == "yesca") {
			caballero->getListaArmas()->ingresarUltimo((Yesca*)mat[x][y]);
			cout << "recibio un arma: " << mat[x][y]->getTipo() << endl;
			delete mat[x][y]; mat[x][y] = nullptr;
			return;
		}
		if (mat[x][y]->getTipo() == "daga") {
			caballero->getListaArmas()->ingresarUltimo((Daga*)mat[x][y]);
			cout << "recibio un arma: " << mat[x][y]->getTipo() << endl;
			delete mat[x][y]; mat[x][y] = nullptr;
			return;
		}
		//caballero->getListaArmas()->ingresarUltimo((Arma*)mat[x][y]);
		/*cout << "recibio un arma: " <<mat[x][y]->getTipo() <<endl;
		delete mat[x][y]; mat[x][y] = nullptr;
		return;*/
	}

	if (dynamic_cast<Gargola*>(mat[x][y])) {
		if (caballero->getListaArmas()->cantidadBallestas() > 0) {
			caballero->getListaArmas()->eliminar("ballesta");
			cout << "Gargola derrotada! -1 ballesta" << endl;
			delete mat[x][y]; mat[x][y] = nullptr;
		}
		else {
			cout << "Recibio danio de gargola" << endl;
			mat[x][y]->atacar(caballero);
			delete mat[x][y]; mat[x][y] = nullptr;
		}
	}

	if (dynamic_cast<Ogro*>(mat[x][y])) {
		if (caballero->getListaArmas()->cantidadDagas() > 0) {
			caballero->getListaArmas()->eliminar("daga");
			cout << "Ogro derrotado! -1 daga" << endl;
			delete mat[x][y]; mat[x][y] = nullptr;
			return;
		}
		if (caballero->getListaArmas()->cantidadEspadas() > 0 && caballero->getListaArmas()->cantidadDagas()==0) {
			caballero->getListaArmas()->eliminar("espada");
			delete mat[x][y]; mat[x][y] = nullptr;
			cout << "Ogro derrotado! -1 espada" << endl;
			return;
		}
		if (caballero->getListaArmas()->cantidadEspadas() == 0 && caballero->getListaArmas()->cantidadDagas() == 0) {
			mat[x][y]->atacar(caballero);
			cout << "Recibio danio de ogro" << endl;
			delete mat[x][y]; mat[x][y] = nullptr;
			return;
		}
	}
	if (dynamic_cast<Tentaculos*>(mat[x][y])) {
		if (caballero->getListaArmas()->cantidadYescas() > 0) {
			caballero->getListaArmas()->eliminar("yesca");
			cout << "Tentaculo derrotado! -1 yesca" << endl;
			delete mat[x][y]; mat[x][y] = nullptr;
			return;
		}
		if (caballero->getListaArmas()->cantidadEspadas() > 0 && caballero->getListaArmas()->cantidadYescas() == 0) {
			caballero->getListaArmas()->eliminar("espada");
			cout << "Tentaculo derrotado! -1 espada" << endl;
			delete mat[x][y]; mat[x][y] = nullptr;
			return;
		}
		if (caballero->getListaArmas()->cantidadEspadas() == 0 && caballero->getListaArmas()->cantidadYescas() == 0) {
			mat[x][y]->atacar(caballero);
			cout << "Tecibio danio de tentaculo" << endl;
			delete mat[x][y]; mat[x][y] = nullptr;
			return;
		}
	}

	if (dynamic_cast<Hierba*>(mat[x][y])) {
		mat[x][y]->curar(caballero);
		cout << "Curado!" << endl;
		delete mat[x][y]; mat[x][y] = nullptr;
		return;
	}

	if (dynamic_cast<Cofre*>(mat[x][y])) {
		cout << "HA ENCONTRADO EL COFRE!!" << endl;
		delete mat[x][y]; mat[x][y] = nullptr;
		return;
	}
}

Cosa* Matriz::getCosa(int x, int y)
{
	if (mat[x][y] == nullptr)
		return nullptr;


	return mat[x][y];
			
}

bool Matriz::esValida(int x, int y)
{
	if (x < 0 || x>8 || y < 0 || y>8)
		return false;	

	return true;
}

bool Matriz::hayCofre(int x, int y)
{
	if (dynamic_cast<Cofre*>(mat[x][y]))
		return true;
	return false;
}

void Matriz::movimiento(char wasd, Caballero* cab)
{
	if (wasd == 'w') {//arriba
		if (esValida(f - 1, c)) {
			
			if (hayCofre(f - 1, c)) {
				f = f - 1;
				cout << "HAY UN COFRE!" << endl;
				return;
			}

			f = f - 1;
			verificar(f, c, cab);
			delete mat[f + 1][c]; mat[f + 1][c] = nullptr;
			mat[f][c] = new Caballero(cab);
			return;
		}
		else {
			cout << "No es valida" << endl;
		}
			
	}
	if (wasd == 's') {//abajo
		if (esValida(f + 1, c)) {

			if (hayCofre(f + 1, c)) {
				f = f + 1;
				cout << "HAY UN COFRE!" << endl;
				return;
			}

			f = f + 1;
			verificar(f, c, cab); 
			delete mat[f-1][c]; mat[f-1][c] = nullptr;
			mat[f][c] = new Caballero(cab);
			return;
		}
		else {
			cout << "No es valida" << endl;
		}
	}
	if (wasd == 'a') {//izq
		if (esValida(f , c-1)) {

			if (hayCofre(f, c - 1)) {
				cout << "HAY UN COFRE!" << endl;
				c = c - 1;
				return;
			}

			c = c - 1;
			verificar(f, c, cab);
			delete mat[f][c + 1]; mat[f][c + 1] = nullptr;
			mat[f][c] = new Caballero(cab);
			return;
		}
		else {
			cout << "No es valida" << endl;
		}
	}
	if (wasd == 'd') {//der
		if (esValida(f , c+1)) {

			if (hayCofre(f, c + 1)) {
				c = c + 1;
				cout << "HAY UN COFRE!" << endl;
				return;
			}

			c = c + 1;
			verificar(f, c, cab);
			delete mat[f][c - 1]; mat[f][c - 1] = nullptr;
			mat[f][c] = new Caballero(cab);
			return;
		}
		else {
			cout << "No es valida" << endl;
		} 
	}

}
