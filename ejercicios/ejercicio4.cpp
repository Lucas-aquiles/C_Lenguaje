

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    int multiplicacion = 1;
    int cantidadNumeros = 0;
    int numero;

while (numero != 0){
        cout << "ingrese un numero : ";
        cin >> numero;
        if(numero % 2== 0){
            suma += numero;
        }else if(numero % 5 == 0){
            multiplicacion *= numero;
        }
    }
  

    printf("La suma de los números pares es: %d\n", suma);
    printf("La multiplicacion de los números multiplo de 5 es: %d\n", multiplicacion);

    return 0;
}