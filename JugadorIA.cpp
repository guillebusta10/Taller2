#include "JugadorIA.h"

JugadorIA::JugadorIA(string simbolo) : Jugador(simbolo,nombre), ia(simbolo) {}

void JugadorIA::hacerMovimiento(Tablero& tablero) {
    ia.mejorMovimiento(tablero);  
}