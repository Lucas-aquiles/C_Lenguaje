/*
Escriba un programa en el que se
ingresa por teclado 4 números reales positivos,
luego se los pase como parámetros a una función que
 tiene como objetivo devolver el resultado de la multiplicación de
todos ellos. El resultado debe mostrarse en el programa principal.
*/

#include <stdio.h>
#include <iostream>
using namespace std;

void multiplica(int a, int b, int c, int d)
{
    int mult;
    mult = a * b * c * d;

    printf("El valor de la multiplicacion es : %d\n", mult);
}
int main()
{
    int num1, num2, num3, num4 = 0;

    cout << "ingrese 4 numeros, separados por enter : ";
    cin >> num1 >> num2 >> num3 >> num4;

    multiplica(num1, num2, num3, num4);
}