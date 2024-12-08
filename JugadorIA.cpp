#include "JugadorIA.h"
//clase hija de la clase jugador, identificada por clase de la ia 
JugadorIA::JugadorIA(string simbolo) : Jugador(simbolo,nombre), ia(simbolo) {}
//realiza el movimiento del jugador ia con sus respectivas condiciones 
void JugadorIA::hacerMovimiento(Tablero& tablero) {
    ia.mejorMovimiento(tablero);  
}