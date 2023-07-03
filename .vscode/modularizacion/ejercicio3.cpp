/*
Realice un programa con 2 funciones. La 
tarea de una de ellas es la de calcular 
el área de un cuadrado dándole como parametro 
el valor de un LADO, la tarea de la otra función 
es la de calcular el área de una circunferencia
 dándole como parametro el valor de su RADIO. Muestre
  los resultados en el programa principal. 
Los cálculos se deben realizar mientras no se
 ingrese como LADO o RADIO un valor 0(cero).
 area = lado por lado
 A= Π·R2


*/
#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int areaCuadrado();
float areaCirculo();
int main()
{
    int num1;

    cout << "Desea calcular el el area de un cuadrado ingrese 1 :\n";
    cout << "Desea calcular el area de una circunsferencia ingrese 2 :\n";

    cin >> num1;

    if(num1==1){
       int resultado = areaCuadrado();
           cout << "EL area es :  " << resultado << endl;

    }
    else if (num1==2){
    
         float resultado = areaCirculo();
           cout << "EL area es :  " << resultado << endl;
      }
      return 0;
    
}
int areaCuadrado(){  
    int a;
    cout << " ingrese un lado en cuadrado :\n";
    cin >> a;
    int resultado = a  * a ;
    return resultado;

}
float areaCirculo(){
  float a ;
   cout << " ingrese el radio  :\n";
    cin >> a;
    double pi = M_PI;
    float resultado =   pi * (a*a) ;
    return resultado;
}
