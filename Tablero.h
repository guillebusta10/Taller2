#include "Jugador.h"
#include <string>
using namespace std;

class Tablero{
    private:
        string tablero[3][3];
        Jugador *jugador1, *jugador2;

    public:
        Tablero(Jugador *j1,Jugador *j2);

        bool movimientos(int fila, int columna,Jugador *jugador);
        void mostrarTablero();
        bool ganador();
        bool Tablerolleno();
        

        
};