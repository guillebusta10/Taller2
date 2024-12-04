    

#include <string>
using namespace std;

 
class Jugador{
private:
    string simbolo;
    string nombre; 

public:
    
    Jugador(string simbolo, string nombre);

    string getSimbolo();

    string getNombre() ;
};