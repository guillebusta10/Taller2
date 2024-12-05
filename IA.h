#include "Tablero.h"
#pragma once
class IA {
public:
    IA(string simbolo);  

    void mejorMovimiento(Tablero& tablero);

private:
    string simbolo; 
    int minimax(Tablero& tablero, int profundidad, bool esMaximizar, int alpha, int beta); 
    int evaluar(Tablero& tablero);  
    bool esMovible(Tablero& tablero, int fila, int columna);  
};