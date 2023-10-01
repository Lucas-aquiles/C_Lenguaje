#include <iostream>

using namespace std;

void buscarNumeroEnArreglo(int arreglo[], int cantidad, int numero)
{
    bool encontrado = false;

    cout << "Posiciones donde se encuentra el número " << numero << " en el arreglo:" << endl;

    for (int i = 0; i < cantidad; i++)
    {
        if (arreglo[i] == numero)
        {
            cout << "Posición " << i << endl;
            encontrado = true;
        }
    }

    if (!encontrado)
    {
        cout << "El número no se encuentra en el arreglo." << endl;
    }
}

int main()
{
    int arreglo[10] = {5, 8, 2, 6, 8, 1, 9, 8, 4, 3};
    int numeroABuscar;

    cout << "Ingrese un número a buscar ";
    cin >> numeroABuscar;

    buscarNumeroEnArreglo(arreglo, 10, numeroABuscar);

    return 0;
}
