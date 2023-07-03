/*#include <stdio.h>

int main() {
    int entero;
    float flotante;

    printf("Ingrese un valor entero: ");
    scanf("%u", &entero);

if(entero ==10){
    printf("El numero es correcto\n");
}

    // printf("Ingrese un valor flotante: ");
    // scanf("%f", &flotante);

    // printf("El valor entero ingresado es: %u\n", entero);
    // printf("El valor flotante ingresado es: %f\n", flotante);

    return 0;
}*/

// #include<iostream>
// using namespace std;
//  int main(){
//     int numero;

//     cout <<"digite un numero : ";
//     cin>>numero;

//     cout <<"\nEl numero digitado es : "<<numero;
//     return 0;
//  }



// #include<iostream>
// using namespace std;
 
// int X;
// main()
// {
//  for( X=3; X>0; X--)
//  {
//  printf("X=%d\n",X);
//  }
// }
/* POR VALOR*/
// #include <stdio.h>
// #include <conio.h>
// float multiplica(int x, int y, float z){ 
//  float mult;
//  mult = x * y * z;
//  x+=1;
//  printf("El valor modificado en la fc es: %d\n",x);
//  return mult;
// }
// int main(){ 
//  int val1=10,val2=11;
//  float val3=11.5;
//  printf("El primer valor es: %d\n",val1);
//  printf("La multiplicacion es: %f\n",multiplica(val1,val2,val3)); 
//  printf("El primer valor luego de la funcion es: %d\n",val1);
//  getch();
//  return 0;
// }

#include <stdio.h>
#include <conio.h>
float multiplica(int * x, int y, float z){ 
 float mult;
 mult = (*x) * y * z;
 (*x)+=1;
 printf("El valor modificado en la fc es: %d\n",*x);
 return mult;
}
int main(){ 
 int val1=10,val2=11;
 float val3=11.5;
 printf("El primer valor es: %d\n",val1);
 printf("La multiplicacion es: %f\n",multiplica(&val1,val2,val3)); 
 printf("El primer valor luego de la funcion es: %d\n",val1);
 getch();
 return 0;
}