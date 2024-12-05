#include "Tablero.h"
#include "JugadorH.h"
#include "JugadorIA.h"
#pragma once
class Juego {
public:
    Juego();  

    void jugar();  

private:
    Tablero tablero;
    Jugador* jugador1;  
    Jugador* IA;
    Jugador* jugador2;  
    bool esTurnoJugador1;  
};