/*
Desarrolle un programa en el que se define una variable
constante declarada con un valor entero positivo,
 se la pase por parámetro a una función y en ella
  se debe obtener la suma de los números pares
comprendidos entre 1 y el numero recibido por
 parámetro. Muestre la suma obtenida..
*/

#include <stdio.h>
#include <iostream>
using namespace std;
int sumaPares(int a);

int main()
{
    int num1;

    cout << "ingrese un numero positivo : ";
    cin >> num1;
    const int num2 = num1;
    int resultado = sumaPares(num2);
    cout << "La suma de los números pares entre 1 y " << num1 << " es: " << resultado << endl;
}
int sumaPares(int a)
{
    int suma = 0;
    for (int i = 2; i <= a; i += 2)
    {
        suma += i;
    }
    return suma;
}