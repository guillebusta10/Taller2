#include <iostream>
#include <string>
#include "Tablero.h"
using namespace std;

int main(){
    Jugador j1("X", "player 1");
    Jugador j2("O", "player 2");

    Tablero tablero(&j1, &j2);
    Jugador *aux= &j1;

    int fila,columna;
    bool fin=false;

    while(!fin){
        tablero.mostrarTablero();
        cout << aux->getNombre() << ", ingresa fila (0-2) y columna (0-2): ";
        cin >> fila >> columna;

        if (!tablero.movimientos(fila, columna, aux)) {
            cout << "Movimiento invalido. Intenta de nuevo.\n";
            continue;
        }

        if (tablero.ganador()) {
            tablero.mostrarTablero();
            cout << aux->getNombre() << " FELICIDADES GANASTE !\n";
            fin = true;
        } else if (tablero.Tablerolleno()) {
            tablero.mostrarTablero();
            cout << "¡Es un empate!\n";
            fin = true;
        }

        aux = (aux == &j1) ? &j2 : &j1;
    
    }


    
    
    return 0;

}
