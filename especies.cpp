#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Especie {
public:
    Especie(string nombre, bool afectada) : nombre(nombre), afectada(afectada) {}

    string obtener_nombre() const {
        return nombre;
    }

    bool ha_sido_afectada() const {
        return afectada;
    }

private:
    string nombre;
    bool afectada;
};

class RegistroIn {
public:
    void registrar_afectacion(const Especie& especie) {
        especies_afectadas.push_back(especie);
    }

    int contar_especies_afectadas() const {
        int contador = 0;
        for (const Especie& especie : especies_afectadas) {
            if (especie.ha_sido_afectada()) {
                contador++;
            }
        }
        return contador;
    }

private:
    vector<Especie> especies_afectadas;
};

int main() {
    RegistroIn registro;

    while (true) {
        string nombre_especie;
        char respuesta;
        cout << "Ingrese el nombre de la especie: ";
        getline(cin, nombre_especie);

        cout << "¿Ha sido afectada por los incendios? escriba s para si o n para no: ";
        cin >> respuesta;
        cin.ignore(); // Limpiar el buffer del salto de línea

        bool afectada = (respuesta == 's' || respuesta == 'S');

        Especie especie(nombre_especie, afectada);
        registro.registrar_afectacion(especie);

        cout << "¿Desea registrar otra especie? escriba s para si o n para no: ";
        cin >> respuesta;
        cin.ignore(); 

        if (respuesta != 's' && respuesta != 'S') {
            break;
        }
    }

    cout << "Cantidad de especies afectadas por los incendios: " << registro.contar_especies_afectadas() << endl;

    return 0;
}
