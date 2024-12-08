#include "IA.h"
#include <iostream>
#include <climits>  
using namespace std;
// clase que implementa funcionalidades de la IA
IA::IA(string simbolo) : simbolo(simbolo) {}
//funcion que establece el movimiento mas optimo.
void IA::mejorMovimiento(Tablero& tablero) {
    int mejorValor = INT_MIN;
    int filaMejor = -1, colMejor = -1;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (tablero.obtenerCelda(i, j) == " ") {  
                tablero.movimientos(i, j, simbolo);  
                int valorMovimiento = minimax(tablero, 0, false, INT_MIN, INT_MAX);  
                tablero.deshacerMovimiento(i, j);  

                if (valorMovimiento > mejorValor) {
                    mejorValor = valorMovimiento;
                    filaMejor = i;
                    colMejor = j;
                }
            }
        }
    }

    tablero.movimientos(filaMejor, colMejor, simbolo);
}
//realiza la mejor puntuacion actual y minimiza la puntuacion del oponente
int IA::minimax(Tablero& tablero, int profundidad, bool esMaximizar, int alpha, int beta) {
    if (tablero.ganador("X")) return 10 - profundidad;  
    if (tablero.ganador("O")) return profundidad - 10;  
    if (tablero.Tablerolleno()) return 0;  

    if (esMaximizar) {
        int mejorValor = INT_MIN;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (tablero.obtenerCelda(i, j) == " ") {
                    tablero.movimientos(i, j, simbolo);
                    mejorValor = max(mejorValor, minimax(tablero, profundidad + 1, false, alpha, beta));
                    tablero.deshacerMovimiento(i, j);
                    alpha = max(alpha, mejorValor);
                    if (beta <= alpha) break;  
                }
            }
        }
        return mejorValor;
    } else {
        int mejorValor = INT_MAX;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (tablero.obtenerCelda(i, j) == " ") {
                    tablero.movimientos(i, j, "O");  
                    mejorValor = min(mejorValor, minimax(tablero, profundidad + 1, true, alpha, beta));
                    tablero.deshacerMovimiento(i, j);
                    beta = min(beta, mejorValor);
                    if (beta <= alpha) break;  
                }
            }
        }
        return mejorValor;
    }
}
