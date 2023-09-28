#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
int arreglo[10]={82,6,4,12,19,12,89,68,45,37};
int i,pasada,aux;
cout << "*** Datos DESORDENADOS ***" << endl;
for (i=0;i<10;i++){
cout << arreglo[i] << " - ";
}
for (pasada=0;pasada<9;pasada++){
for (i=0;i<9;i++){
if (arreglo[i+1] < arreglo[i]){
aux=arreglo[i+1];
arreglo[i+1]= arreglo[i];
arreglo[i]=aux;
}
}
}
cout << endl << endl << "*** Datos ORDENADOS ***" << endl;
for (i=0;i<10;i++){
cout << arreglo[i] << " - ";
}

cout << endl;
system("pause");
return 0;
}
