#include "Matriz.h"

Matriz::Matriz()
{
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
		if (mat[randX][randY] == nullptr) {
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
		if (mat[randX][randY] == nullptr) {
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
		if (mat[randX][randY] == nullptr) {
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
		if (mat[randX][randY] == nullptr) {
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
		if (mat[randX][randY] == nullptr) {
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
		if (mat[randX][randY] == nullptr) {
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
		if (mat[randX][randY] == nullptr) {
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
		if (mat[randX][randY] == nullptr) {
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
		if (mat[randX][randY] == nullptr) {
			//cout << randX << " -- " << randY << endl;
			mat[randX][randY] = new Cofre();
			cont++;
		}
	} while (cont < 1);
}

void Matriz::eliminar(Cosa* cosa)
{

}

void Matriz::eliminar(int x, int y)
{
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
