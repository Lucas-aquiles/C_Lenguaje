#include <iostream>
#include <string>

using namespace std;


int main() {
  string nombres[10];

  for (int i = 0; i < 10; i++) {
    cout << "Ingrese el nombre de la persona " << i + 1 << ": ";
    cin >> nombres[i];
  }

  for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (nombres[i] > nombres[j]) {
        string guardar = nombres[i];
        nombres[i] = nombres[j];
        nombres[j] = guardar;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    cout << nombres[i] << " ";
  }

  return 0;
}