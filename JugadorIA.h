#include "Jugador.h"
#include "IA.h"
#pragma once
class JugadorIA : public Jugador {
public:
    JugadorIA(string simbolo);  

    void hacerMovimiento(Tablero &tablero);  

private:
    IA ia;  
};
