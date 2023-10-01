#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

const int NUM_AREAS = 4; 
const double PRESUPUESTO_TOTAL = 1000000; 

void registrarPresupuesto(double presupuesto[][2]) {
    
    cout << "Registro del presupuesto anual:" << endl;

    for (int i = 0; i < NUM_AREAS; i++) {
        cout << "Área " << i + 1 << ":" << endl;

        cout << "Porcentaje asignado (0-100): ";
        cin >> presupuesto[i][0];

        if (presupuesto[i][0] < 0 || presupuesto[i][0] > 100) {
            cout << "Porcentaje no válido. Debe estar en el rango de 0 a 100." << endl;
            i--; 
            continue;
        }

        presupuesto[i][1] = (presupuesto[i][0] / 100) * PRESUPUESTO_TOTAL;
    }
}

void registrarGastos(double presupuesto[][2]) {
    int codigoArea;
    cout << "Ingrese el código del área (1-" << NUM_AREAS << "): ";
    cin >> codigoArea;

    if (codigoArea >= 1 && codigoArea <= NUM_AREAS) {
        double gasto;
        cout << "Ingrese el monto del gasto: ";
        cin >> gasto;

        if (gasto <= presupuesto[codigoArea - 1][1]) {
            presupuesto[codigoArea - 1][1] -= gasto;
            cout << "Gasto registrado exitosamente." << endl;
        } else {
            cout << "El gasto no es posible. Excede el saldo disponible." << endl;
        }
    } else {
        cout << "Código de área no válido." << endl;
    }
}

void calcularSaldoYPorcentaje(const double presupuesto[][2]) {
    cout << "Saldo disponible y porcentaje utilizado por área:" << endl;

    for (int i = 0; i < NUM_AREAS; i++) {
        double saldoDisponible = presupuesto[i][1];
        double porcentajeUtilizado = ((presupuesto[i][0] / 100) * PRESUPUESTO_TOTAL - saldoDisponible) / (presupuesto[i][0] / 100) * PRESUPUESTO_TOTAL * 100;

        cout << "Código de área: " << i + 1 << endl;
        cout << "Saldo Disponible: $" << fixed << setprecision(2) << saldoDisponible << endl;
        cout << "Porcentaje Utilizado: " << fixed << setprecision(2) << porcentajeUtilizado << "%" << endl;
    }
}

int main() {
    double presupuesto[NUM_AREAS][2]; 

    registrarPresupuesto(presupuesto);

    for (int i = 0; i < NUM_AREAS; i++) {
        registrarGastos(presupuesto);
    }

    calcularSaldoYPorcentaje(presupuesto);

    return 0;
}
