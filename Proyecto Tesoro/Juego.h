#pragma once
#include "Matriz.h"
#include "windows.h"
class Juego
{
private:
	Matriz* mat;
	ListaArmas* lista;
	Caballero* caballero;

public:

	Juego() {
		mat = new Matriz();
		lista = new ListaArmas();
		caballero = new Caballero(lista, true);

		
		char m =' ';
		int op=0;
		bool j = true;

		do {
			cout << menu() << endl; cin >> op;
			if (op != 1 && op != 2 && op != 3 && op != 4)
				cout << "ERROR DE RANGO!" << endl;
			system("pause");
			system("cls");

			switch (op) {
			case 1:
				system("cls");
				cout << mat->imprimir() << endl;
				cout << caballero->toString() << endl;
				cout << "Hacia donde? (w,a,s,d)" << endl;cin >> m;
				mat->movimiento(m, caballero);
				system("pause");
				system("cls");
				cout << mat->imprimir() << endl;
				cout << caballero->toString() << endl;
				system("pause");
				system("cls");
				if (dynamic_cast<Cofre*>(mat->getPosicionActual())) {
					cout << "winner winner chicken dinner" << endl; 
					j = false;
					break;
				}
				if (caballero->getHp() <= 0) {
					cout << "El caballero decidio retirarse" << endl;
					j = false;
				}
				break;

			case 2:
				system("cls");
				cout << "Guardando partida..." << endl; break;

			case 3:
				system("cls");
				cout << "Recuperando partida..." << endl; break;

			case 4:
				system("cls");
				cout << "Saliendo... Gracias por jugar!" << endl; break;
			
			}
		} while (op != 4 && j == true);
		
	}


	string menu() {
		stringstream s;
		s << "------EL COFRE MARAVILLOSO------" << endl;
		s << "	    Ingrese una opcion       " << endl;
		s << endl;
		s << "1- Mover al caballero : " << endl;
		s << "2- Guardar: " << endl;
		s << "3- Recuperar: " << endl;
		s << "4- Salir: " << endl;
		s << endl;
		return s.str();
	}


};

