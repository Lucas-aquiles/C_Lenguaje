#include <stdio.h>
#include<iostream>
using namespace std;

int main() {
    int suma = 0;
    int cantidadNumeros = 0;
    int numero;

while(suma <= 50 && cantidadNumeros <=10){
    cout << "ingrese un numero : ";
    cin >> numero ;
    suma += numero;
    cantidadNumeros++;

}
    

    printf("La suma de los números es: %d\n", suma);

    return 0;
}