#include <string>
#include <iostream>
#include "Tablero.h"
using namespace std;
//clase tablero donde se crea un tablero por juego
Tablero::Tablero()
{

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            this->tablero[i][j]=" ";
        }
    }

}
//se realizan los movimientos del jugador en el tablero para establecer la conexion de jugador y tablero 
void Tablero::movimientos(int fila, int columna, string jugador)
{
    if (fila >= 0 && fila < 3 && columna >= 0 && columna < 3 && tablero[fila][columna] == " ") {
        tablero[fila][columna] = jugador;
    }
}
//muestra el tablero, segun los movimientos que se realicen 
void Tablero::mostrarTablero()
{
    cout<<"\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< this->tablero [i][j];
            if(j< 2){
                cout<<" | ";
            }
    
        }
        cout<<"\n";
        if(i<2){
            cout<<"----------\n";
        }
    }    
    cout<<"\n";
}
//verifica el ganador de cada partida
bool Tablero::ganador(string jugador)
{
    for (int i = 0; i < 3; i++) {
        if (this->tablero[i][0] == jugador && this->tablero[i][1] == jugador && this->tablero[i][2] == jugador){
            return true;
        } 
        if (this->tablero[0][i] == jugador && this->tablero[1][i] == jugador && tablero[2][i]== jugador){

            return true;    
        }
        if (this->tablero[0][0] == jugador && this->tablero[1][1] == jugador && this->tablero[2][2] == jugador) {
            return true;
        }    
        if (this->tablero[0][2] == jugador && this->tablero[1][1] == jugador && this->tablero[2][0] == jugador){
            return true;
 
        } 
    }
    return false;
}
//verifica si el tablero se encuentra completado 
bool Tablero::Tablerolleno()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (this->tablero[i][j] == " "){
                return false;
            } 
        }
    }
    return true;

}
// entrega una celda que se busque 
string Tablero::obtenerCelda(int fila, int columna)
{
    return tablero[fila][columna];
}
//deshace un movimiento que no sea optimo, se utiliza en la funcion minimax
void Tablero::deshacerMovimiento(int fila, int col) {
    tablero[fila][col] = " ";
}