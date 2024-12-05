#include "Tablero.h"  
#include <string>
#pragma once
using namespace std;

class Jugador {
protected:
    string simbolo;
    string nombre;

public:
    Jugador(string simbolo, string nombre);
    string getSimbolo();
    string getNombre();
    virtual void hacerMovimiento(Tablero& tablero);  
    virtual ~Jugador() {}
};
