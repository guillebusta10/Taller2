#include "Juego.h"
#include <iostream>
using namespace std;
//clase JUEGO, clase que implementa el menu e interacion con el programa
Juego::Juego() {
    jugador1 = new JugadorH("O","player1");
    IA = new JugadorIA("X");
    jugador2 = new JugadorH("X","player2");  
    tablero=new Tablero();
    esTurnoJugador1 = true;
}
// funcion de interaccion con el menu y juego en si
void Juego::jugar() {
    int opcion=0;
    cout<<"BIENVENIDO AL JUEGO DEL GATO"<<endl;
    cout<<"ELIGE MODO DE JUEGO: "<<endl;
    cout<<"1.- jugar solitario con IA "<<endl;
    cout<<"2.- jugar multiplayer "<<endl;
    cout<<"(ingresa 1 o 2)"<<endl;
    
    cin >> opcion;
    if(opcion==1){
        while (true) {
            tablero->mostrarTablero();

            if (esTurnoJugador1) {
                cout << "Tu turno" << endl;
                jugador1->hacerMovimiento(*tablero);  
            } else {
                cout << "Turno de IA" << endl;
                IA->hacerMovimiento(*tablero); 
            }
            
            if (tablero->ganador("X")) {
                tablero->mostrarTablero();
                cout << " LA IA GANA !!!!" << endl;
                break;
            } else if (tablero->ganador("O")) {
                tablero->mostrarTablero();
                cout << "TU GANAS !!!!" << endl;
                break;
            } else if (tablero->Tablerolleno()) {
                tablero->mostrarTablero();
                cout << "EMPATE" << endl;
                break;
            }

            esTurnoJugador1 = !esTurnoJugador1;  
        }
    }else if(opcion==2){
        while (true) {
            tablero->mostrarTablero();

            if (esTurnoJugador1) {
                cout << "Turno de jugador 1 (O)" << endl;
                jugador1->hacerMovimiento(*tablero);  
            } else {
                cout << "Turno de jugador 2 (X)" << endl;
                jugador2->hacerMovimiento(*tablero); 
            }
            
            if (tablero->ganador("X")) {
                tablero->mostrarTablero();
                cout << " JUGADOR 2 GANA !!!!" << endl;
                break;
            } else if (tablero->ganador("O")) {
                tablero->mostrarTablero();
                cout << " JUGADOR 1 GANA !!!!" << endl;
                break;
            } else if (tablero->Tablerolleno()) {
                tablero->mostrarTablero();
                cout << "EMPATE" << endl;
                break;
            }

            esTurnoJugador1 = !esTurnoJugador1;  
        }
        delete jugador1;
        delete jugador2;
        delete tablero;
        delete IA;
    }else{
        cout<<"opcion invalida, ingrese nuevamente"<<endl;
        
        //jugar();
    }








}
