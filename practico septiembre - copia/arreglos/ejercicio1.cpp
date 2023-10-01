

#include <iostream>

using namespace std;

int main() {
  int arrayNumero[10];

  for (int i = 0; i < 10; i++) {
    cout << "Ingrese un numero ";
    cin >> arrayNumero[i];
  };
  int suma = 0;
  int mayor = arrayNumero[1];

  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
      suma += arrayNumero[i];
    } else {
      if (arrayNumero[i] > mayor) {
        mayor = arrayNumero[i];
      }
    }
  }

//   // Imprimimos los resultados
  cout << "La suma de los elementos en posiciones pares es " << suma << endl;
  cout << "El mayor número en posiciones impares es " << mayor << endl;

  return 0;
}