// #include <stdio.h>

// main(){
//     printf("HOLA, ESTE ES MI PRIMER PROGRAMA EN C+d+");
// }

// #include <stdio.h>
// int main()
// {
// /* Aquí va el cuerpo del programa */
// printf( "Hola mundo\n" ); /* Esto imprime hola mundo en pantalla */
// return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
// cout << "Hola MUNDO, " << " Hola C++ " << endl;  
//       return 0;

// }


// #include <stdio.h>
// int main()
// {
// int num;
// printf( "Introduce un número " );
// scanf( "%i", &num );
// printf( "Ingresamos el número %i\n", num );
// }


#include <stdio.h>
#include <conio.h>

int main()
{
char letra;
printf( "Introduce una letra: " );
fflush( stdout );
letra = getche();
printf( "\nHas introducido la letra: %c", letra );
return 0;

}