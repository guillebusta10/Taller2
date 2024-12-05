#include <string>
using namespace std;
#pragma once
class Tablero{
    private:
        string tablero[3][3];

    public:
        Tablero();

        void movimientos(int fila, int columna,string jugador);
        void mostrarTablero();
        bool ganador(string jugador);
        bool Tablerolleno();
        string obtenerCelda(int fila,int columna);
        void deshacerMovimiento(int fila, int columna);

        
};