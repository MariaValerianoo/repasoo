#include <iostream>

using namespace std;

int main() {
    double velocidadA, velocidadB, distancia_AB;

    cout << "Ingrese la velocidad del automovil que se mueve de la ciudad A a la ciudad B (en km/h): ";
    cin >> velocidadA;

    cout << "Ingrese la velocidad del automovil que se mueve de la ciudad B a la ciudad A (en km/h): ";
    cin >> velocidadB;

    cout << "Ingrese la distancia entre la ciudad A y la ciudad B (en kilometros): ";
    cin >> distancia_AB;

    double tiempo_encuentro;
    if (velocidadA > velocidadB) {
        tiempo_encuentro = distancia_AB / (velocidadA - velocidadB);
    } else if (velocidadB > velocidadA) {
        tiempo_encuentro = distancia_AB / (velocidadB - velocidadA);
    } else {
        cout << "Los automoviles tienen la misma velocidad, nunca se encuentran." << endl;
        return 1;
    }

    cout << "Los automoviles se encuentran despues de " << tiempo_encuentro << " horas." << endl;

    return 0;
}
