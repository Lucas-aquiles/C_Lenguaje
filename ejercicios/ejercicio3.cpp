/*
Escriba un programa que permita ingresar 10 números,
ninguno de ellos igual a cero. Se pide sumar los positivos mayores a 20,
obtener el producto de los menores a 20 y luego mostrar ambos resultados.
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    int multiplicacion = 1;
    int cantidadNumeros = 0;
    int numero;

// while (numero != 0){
    //     cout << "ingrese un numero : ";
    //     cin >> numero;
    //     if(numero % 2== 0){
    //         suma += numero;
    //     }else if(numero %5 == 0){
    //         multiplicacion *= numero;
    //     }
    // }
    while (cantidadNumeros <= 9)
    {
        cout << "ingrese un numero : ";
        cin >> numero;
        if (numero > 20)
        {
            suma += numero;
        }
        else if (numero < 20)
        {
            multiplicacion *= numero;
        }
        cantidadNumeros++;
    }

    printf("La suma de los números es: %d\n", suma);
    printf("La multiplicacion de los números es: %d\n", multiplicacion);

    return 0;
}