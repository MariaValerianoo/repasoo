#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double salario_base_por_hora = 40000; 
    const double salario_extra_por_hora = 5000; 
    const int horas_base = 35; 
    
    int horas_trabajadas;
    double salario_semanal;

    cout << "Ingrese el numero de horas trabajadas en la semana: ";
    cin >> horas_trabajadas;

    if (horas_trabajadas <= horas_base) {
        salario_semanal = horas_trabajadas * salario_base_por_hora;
    } else {
        int horas_extra = horas_trabajadas - horas_base;
        salario_semanal = horas_base * salario_base_por_hora + horas_extra * salario_extra_por_hora;
    }
    cout << fixed << setprecision(2);
    cout << "El salario semanal del empleado es: $" << salario_semanal << endl;

    return 0;
}
