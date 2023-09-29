/*Realice el ejercicio 3 de la parte de Arreglos, creando las funciones correspondientes para leer los arreglos,
realizar la suma solicitada y otra para indicar los elementos que están en A y no están en B


*/

#include <iostream>

using namespace std;

// Función para leer un arreglo de enteros
void leerArreglo(int arreglo[])
{
  for (int i = 0; i < 5; i++)
  {
    cout << arreglo[i];
  }
  cout << endl;
}

void sumarArreglos(int arregloA[], int arregloB[], int arregloC[])
{
  for (int i = 0; i < 5; i++)
  {
    arregloC[i] = arregloA[i] + arregloB[i];
  }
}

void encontrarElementos(int arregloA[], int arregloB[], int arregloAux[])
{
  int i, j;
  int auxnum = 0;
  int n;
  int *auxArray = new int[n];
  ;
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (arregloA[i] == arregloB[j])
      {
      }
      else
      {
        auxArray[i] = arregloA[i];
      }
    }
  }
}

int main()
{

  int A[5] = {1, 2, 3, 4, 5};
  int B[5] = {2, 3, 4, 5, 6};

  int C[5];
  int n;

  int *Aux = new int[n];

  leerArreglo(A);
  leerArreglo(B);

  sumarArreglos(A, B, C);

  for (int i = 0; i < 5; i++)
  {
    cout << C[i] << "-";
  }
  cout << endl;

  encontrarElementos(A, B, Aux);
  for (int i = 0; i < 5; i++)
  {
    cout << Aux[i] << "-";
  }
  cout << endl;

  return 0;
}
