#include <iostream>


using namespace std;

int main() {
    char tipo_plan;
    double precio_plan, descuento, precio_final;

    cout << "Ingrese el tipo de plan (P para prepago, S para postpago): ";
    cin >> tipo_plan;

    cout << "Ingrese el precio del plan: ";
    cin >> precio_plan;

    switch(tipo_plan) {
        case 'P':
        case 'p':
            if (precio_plan >= 100000 && precio_plan <= 900000) {
                descuento = precio_plan * 0.1; 
            } else if (precio_plan > 1000000) {
                descuento = precio_plan * 0.2; 
            } else {
                descuento = 0;
            }
            break;
        case 'S':
        case 's':
            if (precio_plan < 500000) {
                descuento = precio_plan * 0.15; 
            } else if (precio_plan >= 500000 && precio_plan <= 1000000) {
                descuento = precio_plan * 0.2; 
            } else {
                descuento = precio_plan * 0.25; 
            }
            break;
        default:
            cout << "Tipo de plan no válido." << endl;
            return 1;
    }

    precio_final = precio_plan - descuento;

    cout << "Descuento realizado: $" << descuento << endl;
    cout << "Valor neto de la compra: $" << precio_final << endl;

    return 0;
}
