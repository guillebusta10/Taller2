#include "JugadorH.h"
#include <iostream>

JugadorH::JugadorH(string simbolo,string nombre): Jugador(simbolo,nombre){

}


void JugadorH::hacerMovimiento(Tablero &tablero) {
    int fila, columna;
    cout << "Ingrese su movimiento (fila y columna): ";
    cin >> fila >> columna;

    
    if (fila >= 0 && fila < 3 && columna >= 0 && columna < 3 && tablero.obtenerCelda(fila, columna) == " ") {
        tablero.movimientos(fila, columna, getSimbolo());
    } else {
        cout << "Movimiento invalido. Intente de nuevo." << endl;
        hacerMovimiento(tablero);  
    }
}