#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  // Declaramos un vector de 10 enteros
  int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int aux;
  int numeroAux [10]; 
  for (int i = (10 - 1); i >= 0; i--){
    aux = numeros[i];
    numeroAux[i] = numeros[10 - i - 1];

    numeroAux[10 - i - 1] = aux;
  }
cout << endl << endl << "*** Datos inversos ***" << endl;


for (int i = 0; i < 10; i++) {
    cout << numeroAux[i] << " ";
  }

cout << endl;
system("pause");
  return 0;
}
