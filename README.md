# Taller2
guillermo bustamante 
felipe blanco
maira cortes 
para compilar el taller se debe escribir g++ -o ejecutable  main.cpp Jugador.cpp JugadorH.cpp JugadorIA.cpp IA.cpp Tablero.cpp Juego.cpp
./ejecutable.exe 
luego desplegara la opciones, si jugar con la ia o multijugador.
al empezar el juego se debe ingresar primero la fila presionar enter y luego la columna.
para crear una ia se implementaron algoritmos de minimax y poda alfa-beta.
donde el minimax la ia buscara el movimiento con el mayor puntaje a favor y menor puntaje para el oponente.
la poda alfa beta, hace que alfa respresente el valor maximo que el jugador maximice su beneficio, y beta representa el valor minimo que el jugador minimice su beneficio.
     
1 | 2 | 3
---------
4 | x | 6
---------
7 | 8 | 9

O | 2 | 3   1 | O | 3    1 | 2 | O    1 | 2 | 3   1 | 2 | 3   1 | 2 | 3  1 | 2 | 3  1 | 2 | 3
---------   ---------    ---------    ---------   ---------   ---------  ---------  ---------
4 | x | 6   4 | x | 6    4 | x | 6    O | x | 6   4 | x | O   4 | x | 6  4 | x | 6  4 | x | 6
---------   ---------    ---------    ---------   ---------   ---------  ---------  ---------
7 | 8 | 9   7 | 8 | 9    7 | 8 | 9    7 | 8 | 9   7 | 8 | 9   O | 8 | 9  7 | O | 9  7 | 8 | O
 


la complejidad algoritmica sin poda seria algo asi: O(b^d) donde b es el numero de posibles jugadas de cada nodo y d es la profundidad maxima del arbol de busquedad
complejidad algoritmica con poda seria: O(raiz(b)^d)




