/*
Realizar un programa donde se ingresa un número por teclado y realizar las siguientes acciones. Implemente un menú simple para que el usuario elija la opción a ejecutar:
1Calcular la suma de los números comprendidos entre el número 1 y el número ingresado.
2Calcular el promedio entre el número 1 y el número ingresado.
3Indicar la cantidad de números pares comprendidos entre 1 y el número ingresado.
4Indicar la cantidad de números cuyo divisor es 3, comprendidos entre 1 y el número ingresado.
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
    int numAux;

    cout << "ingrese un numero : ";
    cin >> numero;

    cout << "Ingrese 1 , si desea calcular la suma del 1 hasta su numero\n";
    cout << "Ingrese 2 , si desea calcular el promedio de 1 y su numero\n";
    cout << "Ingrese 3 , si desea conocer los numero pares entre 1  y su numero\n";
    cout << "Ingrese 4 , si desea conocer los numeros divisores por 3 de hasta su numero\n";
    cin >> numAux;

    switch (numAux)
    {
    case 1:
    {

        int suma1 = 0;

        for (int i = 1; i <= numero; i++)
        {
            suma1 += i;
        }
        printf("%d\n", suma1);
    }

    break;
    case 2:
    {
        int numero2;
        numero2 = 1;
        printf("%d\n", (numero2 + numero) / 2);
    }
    break;

    case 3:
    {
        int cantidadPares = 0;
        for (int i = 1; i <= numero; i++)
        {
            if (i % 2 == 0)
            {
                cantidadPares++;
            }
        }
        printf("La cantidad de números pares entre 1 al %d es: %d\n", numero, cantidadPares);
    }
    break;
    case 4:
    {
        int cantidadDivisores3 = 0;

        for (int i = 1; i <= numero; i++)
        {
            if (i % 3 == 0)
            {
                cantidadDivisores3++;
            }
        }

        printf("La cantidad de números cuyos divisores de 3 , entre 1 y %d son: %d\n", numero, cantidadDivisores3);
    }
    break;
    default:
        printf("No ingreso ninguna opcion\n");
    }

    return 0;
}