#include <iostream>
using namespace std;

int sumaDivisores(int numero) {
    int suma = 1; 
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }

    return suma;
}

bool sonAmigos(int num1, int num2) {
    int sumaDivisoresNum1 = sumaDivisores(num1);
    int sumaDivisoresNum2 = sumaDivisores(num2);

    return (sumaDivisoresNum1 == num2 && sumaDivisoresNum2 == num1);
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    if (sonAmigos(num1, num2)) {
        cout << num1 << " y " << num2 << " son números amigos." << endl;
    } else {
        cout << num1 << " y " << num2 << " no son números amigos." << endl;
    }

    return 0;
}
