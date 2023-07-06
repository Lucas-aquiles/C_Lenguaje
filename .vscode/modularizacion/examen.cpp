/*
Desarrolle un programa que se le pide al usuario que
ingrese por pantalla un numero que representa una cantidad de dias.
Ademas de ello  debe desarrollar una funcion  a la cual se le
pasa como parametro esa variable y dicha funcion  debe devolver la
cantidad  de semanas completas que contiene  esa cantidad de dias, por ejemplo si la
cantidad de dias es 54 la funcion debe retornar 7.
finalmente debe desarrollar otra funcion mas   que tambien se le pasa como parametro  los dias
ingresados por teclado , pero la funcion devuelve la cantidad de dias que faltan para completar
una semana mas, en el ejemplo de  54 dias, esta funcion  deberia devolver el valor 2.

*/

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
int semanasCompletas(int dias);
int cantidadDiasFaltantes(int dias);

int main()
{
    int num1;
    float resultado;
    int diasFaltantes;
    cout << "ingrese una cantidad de días : ";
    cin >> num1;
    resultado = semanasCompletas(num1);
    cout << "la cantidad de semanas completas es: " << resultado << endl;
    diasFaltantes = cantidadDiasFaltantes(num1);
    cout << "la cantidad de dias faltantes es: " << diasFaltantes;
}
int semanasCompletas(int dias)
{
    float resultado;
    resultado = floor(dias / 7);
    return resultado;
}

int cantidadDiasFaltantes(int dias)
{
    if (dias % 7 == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 1; i < 7; i++)
        {
            if ((dias + i) % 7 == 0)
            {
                return i;
            }
        }
    }
    return -1;
}
