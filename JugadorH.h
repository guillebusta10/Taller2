#include "Jugador.h"
#pragma once
class JugadorH : public Jugador {
public:
    JugadorH(string simbolo,string nombre); 

    void hacerMovimiento(Tablero &tablero); 
};
