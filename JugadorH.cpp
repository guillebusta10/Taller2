#include "JugadorH.h"
#include <iostream>
//clase hija de jugador, identifica a jugador humano
JugadorH::JugadorH(string simbolo,string nombre): Jugador(simbolo,nombre){

}

//movimiento del jugador en el juego segunn lo ingresado por pantalla 
void JugadorH::hacerMovimiento(Tablero &tablero) {
    int fila, columna;
    bool mov=false;   

    while(!mov){
        cout << "Ingrese su movimiento (fila y columna): ";
        cin >> fila >> columna;


        if (fila >= 0 && fila < 3 && columna >= 0 && columna < 3 && tablero.obtenerCelda(fila, columna) == " ") {
            tablero.movimientos(fila, columna, getSimbolo());
            break;
        } else {
            cout << "Movimiento invalido. Intente de nuevo." << endl;
        }
    }
}