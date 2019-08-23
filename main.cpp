#include <iostream>
#include "Punteros.h"

/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main del Ejercicio de punteros básicos
 *
 *        Created:  2019-08-18
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
using namespace std;
void menu();

int main() {

    menu();

    return 0;
}

void menu() {
    int respuesta = 0;
    int valor = 0;
    char hold;

    do {
        cout << "  Menu Calculos con Punteros\n";
        cout << "  ====================================\n";
        cout << "  1.  Imprimir datos del puntero en un valor de entrada\n";
		cout << "  2.  Imprime el numero 5 al cubo con funcion por VALOR\n";
		cout << "  3.  Imprime el numero 5 al cubo con funcion por PUNTERO3\n";
        cout << "  4.  Imprime el numero 5 al cubo con funcion por REFERENCIA\n";
		cout << "  5.  Imprime el numero 5 la raiz cuadrada con funcion por VALOR\n";
		cout << "  6.  Imprime el numero 5 al raiz cuadrada con funcion por PUNTERO3\n";
		cout << "  7.  Imprime el numero 5 al raiz cuadrada con funcion por REFERENCIA\n";
        cout << "\n";
        cout << "  8.  Salir\n";
        cout << "  ====================================\n";
        cout << "  Selecciona para entrar: ";
        cin >> respuesta;
        cout << endl;

        switch (respuesta) {
            case 1:
                Punteros::imprimirDatosPuntero();
                cin.ignore();
                cin.get();
                break;
            case 2:
                Punteros::imprimirCalculoAlCuboReferenciaValor();
                cin.ignore();
                cin.get();
                break;
            case 3:
                Punteros::imprimirCalculoAlCuboReferenciaPuntero();
                cin.ignore();
                cin.get();
                break;
            case 4:
                Punteros::imprimirCalculoAlCuboReferenciaReferencia();
                cin.ignore();
                cin.get();
                break;

			case 5:
				Punteros::imprimirCalculoRaizCuadradaReferenciaValor();
				cin.ignore();
				cin.get();
				break;

			case 6:
				Punteros::imprimirCalculoRaizCuadradaReferenciaPuntero();
				cin.ignore();
				cin.get();
				break;

			case 7:
				Punteros::imprimirCalculoRaizCuadradaReferenciaReferencia();
				cin.ignore();
				cin.get();
				break;

            case 8:
                cout << "Hasta Luego.\n";
                break;

            default:
                cout << respuesta << " es un numero invalido\n";

                cout << std::endl;
        }
    } while (respuesta != 8);
}



