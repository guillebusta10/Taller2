#include "Jugador.h" 
#include <string>
using namespace std;

Jugador::Jugador(string simbolo, string nombre) {
    this->simbolo = simbolo;
    this->nombre = nombre;
}

string Jugador::getSimbolo() {
    return simbolo;
}

string Jugador::getNombre() {
    return nombre;
}

void Jugador::hacerMovimiento(Tablero& tablero) {

}

