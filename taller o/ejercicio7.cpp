#include <iostream>

using namespace std;

int main() {
    int numero;
    cout<<"Te dire si un numero es par o impar"<<endl;
    cout << "Ingresa un numero entero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << numero << " es un numero par." << endl;
    } else {
        cout << numero << " es un numero impar." << endl;
    }

    return 0;
}
