#include <string>
#include <iostream>
#include "Tablero.h"
using namespace std;

Tablero::Tablero(Jugador * j1, Jugador * j2)
{
    this->jugador1=j1;
    this->jugador2=j2;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            this->tablero[i][j]=" ";
        }
    }

}

bool Tablero::movimientos(int fila, int columna, Jugador * jugador)
{
    if(fila < 0 || columna < 0 || fila >= 3 || columna >= 3 || this->tablero[fila][columna] != " "){
        return false;

    }
    this->tablero[fila][columna]= jugador->getSimbolo();
    return true;
}

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

bool Tablero::ganador()
{
    for (int i = 0; i < 3; i++) {
        if (this->tablero[i][0] == this->tablero[i][1] && this->tablero[i][1] == this->tablero[i][2] && this->tablero[i][0] != " "){
            return true;
        } 
        if (this->tablero[0][i] == this->tablero[1][i] && this->tablero[1][i] == this->tablero[2][i] && tablero[0][i]!= " "){

         return true;
        }
        if (this->tablero[0][0] == this->tablero[1][1] && this->tablero[1][1] == this->tablero[2][2] && this->tablero[0][0] != " ") {
            return true;
        }    
        if (this->tablero[0][2] == this->tablero[1][1] && this->tablero[1][1] == this->tablero[2][0] && this->tablero[0][2] != " "){
            return true;
 
        } 
    }
    return false;
}

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
