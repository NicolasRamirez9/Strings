#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define T 3

int main()
{
    int legajos[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    int i;
    for(i = 0; i < T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);

        printf("Ingrese notas: ");
        scanf("%d",&notas[i]);

        printf("Ingrese altura: ");
        scanf("%f", &alturas[i]);
    }

    printf("Legajo Nombre Nota Altura \n");

    for(i = 0; i < T; i++)
    {
        printf("%d %s %d %f \n", legajos[i], nombres[i], notas[i], alturas[i]);
    }
    return 0;
}
