#include "Jugador.h" 
#include <string>
using namespace std;
//clase padre jugador
Jugador::Jugador(string simbolo, string nombre) {
    this->simbolo = simbolo;
    this->nombre = nombre;
}
//obtener el simbolo que usara en el juego 
string Jugador::getSimbolo() {
    return simbolo;
}
// obtener el nombre del jugador 
string Jugador::getNombre() {
    return nombre;
}
// hacer el movimiento del juego 
void Jugador::hacerMovimiento(Tablero& tablero) {

}

