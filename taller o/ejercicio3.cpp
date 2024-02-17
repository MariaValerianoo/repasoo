#include <iostream>

using namespace std;

int main() {
    double sueldo, nuevo_sueldo;

    cout << "Ingrese el sueldo del trabajador: ";
    cin >> sueldo;

    if (sueldo < 1000000) {
        nuevo_sueldo = sueldo * 1.15; 
        cout << "El nuevo sueldo del trabajador es: $" << nuevo_sueldo << endl;
        cout<<"El aumento aplicado es del 15%"<<endl;
    } else {
        cout << "El sueldo del trabajador es igual o superior a $1000000, no se aplica aumento." << endl;
    }

    return 0;
}
