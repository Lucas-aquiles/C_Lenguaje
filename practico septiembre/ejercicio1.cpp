#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un número mayor a 0: ");
    scanf("%d", &numero);

    if (numero <= 0)
    {
        printf("El número ingresado no es correcto.\n");
        return 0;
    }

    printf("Los divisores de %d son:\n",numero);

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}