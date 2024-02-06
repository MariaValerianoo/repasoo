#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int jugador_puntos = 0;
    int computadora_puntos = 0;
    srand(time(0));
    cout << "Bienvenido/a a Piedra, Papel o Tijera. Gana 3 de 5 para ganar el juego." << endl;

    cout << "Ronda 1" << endl;
    cout << "Elige tu jugada: (1) Piedra, (2) Papel, (3) Tijera: ";
    int jugador_jugada;
    cin >> jugador_jugada;

    int computadora_jugada = rand() % 3 + 1;  

    if(jugador_jugada!=1 and jugador_jugada!=2 and jugador_jugada!=3){
        cout<<"Opción incorrecta, vuelve a intentarlo"<<endl;
        cout<<"Nadie gana"<<endl;

    }else if ((jugador_jugada == 1 && computadora_jugada == 3) ||
        (jugador_jugada == 2 && computadora_jugada == 1) ||
        (jugador_jugada == 3 && computadora_jugada == 2)) {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "¡Ganaste esta ronda!" << endl;
        jugador_puntos++;
    } else if ((jugador_jugada == 3 && computadora_jugada == 1) ||
               (jugador_jugada == 1 && computadora_jugada == 2) ||
               (jugador_jugada == 2 && computadora_jugada == 3)) {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "La computadora ganó esta ronda." << endl;
        computadora_puntos++;
    } else {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "Empate." << endl;
    }

    cout << "Puntuación: Jugador " << jugador_puntos << " - Computadora " << computadora_puntos << endl;

    cout << "Ronda 2" << endl;
    cout << "Elige tu jugada: (1) Piedra, (2) Papel, (3) Tijera: ";
    cin >> jugador_jugada;

    if(jugador_jugada!=1 and jugador_jugada!=2 and jugador_jugada!=3){
        cout<<"Opción incorrecta, vuelve a intentarlo"<<endl;

    }else if ((jugador_jugada == 1 && computadora_jugada == 3) ||
        (jugador_jugada == 2 && computadora_jugada == 1) ||
        (jugador_jugada == 3 && computadora_jugada == 2)) {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "¡Ganaste esta ronda!" << endl;
        jugador_puntos++;
    } else if ((jugador_jugada == 3 && computadora_jugada == 1) ||
               (jugador_jugada == 1 && computadora_jugada == 2) ||
               (jugador_jugada == 2 && computadora_jugada == 3)) {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "La computadora ganó esta ronda." << endl;
        computadora_puntos++;
    } else {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "Empate." << endl;
    }

    cout << "Puntuación: Jugador " << jugador_puntos << " - Computadora " << computadora_puntos << endl;
    cout << "Ronda 3" << endl;
    cout << "Elige tu jugada: (1) Piedra, (2) Papel, (3) Tijera: ";
    cin >> jugador_jugada;

    if(jugador_jugada!=1 and jugador_jugada!=2 and jugador_jugada!=3){
        cout<<"Opción incorrecta, vuelve a intentarlo"<<endl;

    }else if ((jugador_jugada == 1 && computadora_jugada == 3) ||
        (jugador_jugada == 2 && computadora_jugada == 1) ||
        (jugador_jugada == 3 && computadora_jugada == 2)) {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "¡Ganaste esta ronda!" << endl;
        jugador_puntos++;
    } else if ((jugador_jugada == 3 && computadora_jugada == 1) ||
               (jugador_jugada == 1 && computadora_jugada == 2) ||
               (jugador_jugada == 2 && computadora_jugada == 3)) {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "La computadora ganó esta ronda." << endl;
        computadora_puntos++;
    } else {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "Empate." << endl;
    }
    
    cout << "Puntuación: Jugador " << jugador_puntos << " - Computadora " << computadora_puntos << endl;
    cout << "Ronda 4" << endl;
    cout << "Elige tu jugada: (1) Piedra, (2) Papel, (3) Tijera: ";
    cin >> jugador_jugada;

    if(jugador_jugada!=1 and jugador_jugada!=2 and jugador_jugada!=3){
        cout<<"Opción incorrecta, vuelve a intentarlo"<<endl;

    }else if ((jugador_jugada == 1 && computadora_jugada == 3) ||
        (jugador_jugada == 2 && computadora_jugada == 1) ||
        (jugador_jugada == 3 && computadora_jugada == 2)) {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "¡Ganaste esta ronda!" << endl;
        jugador_puntos++;
    } else if ((jugador_jugada == 3 && computadora_jugada == 1) ||
               (jugador_jugada == 1 && computadora_jugada == 2) ||
               (jugador_jugada == 2 && computadora_jugada == 3)) {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "La computadora ganó esta ronda." << endl;
        computadora_puntos++;
    } else {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "Empate." << endl;
    }

    cout << "Puntuación: Jugador " << jugador_puntos << " - Computadora " << computadora_puntos << endl;
    cout << "Ronda 5" << endl;
    cout << "Elige tu jugada: (1) Piedra, (2) Papel, (3) Tijera: ";
    cin >> jugador_jugada;

    if(jugador_jugada!=1 and jugador_jugada!=2 and jugador_jugada!=3){
        cout<<"Opción incorrecta, vuelve a intentarlo"<<endl;

    }else if ((jugador_jugada == 1 && computadora_jugada == 3) ||
        (jugador_jugada == 2 && computadora_jugada == 1) ||
        (jugador_jugada == 3 && computadora_jugada == 2)) {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "¡Ganaste esta ronda!" << endl;
        jugador_puntos++;
    } else if ((jugador_jugada == 3 && computadora_jugada == 1) ||
               (jugador_jugada == 1 && computadora_jugada == 2) ||
               (jugador_jugada == 2 && computadora_jugada == 3)) {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "La computadora ganó esta ronda." << endl;
        computadora_puntos++;
    } else {
        cout << "La computadora eligió: " << computadora_jugada << endl;
        cout << "Empate." << endl;
    }

    cout << "Puntuación: Jugador " << jugador_puntos << " - Computadora " << computadora_puntos << endl;
   
    if (jugador_puntos >= 3) {
        cout << "¡Felicidades! ¡Ganaste el juego!" << endl;
    } else {
        cout << "La computadora ganó el juego. ¡Inténtalo de nuevo!" << endl;
    }
   

    return 0;
}


