#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41] = "";
    char buffer[1000];

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer) > 19)
    {
        printf("Re-ingrese nombre: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(nombre , buffer);

    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer) > 19)
    {
        printf("Re-ingrese apellido: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(apellido , buffer);

    strcat(nombreCompleto , apellido);
    strcat(nombreCompleto , ", ");
    strcat(nombreCompleto , nombre);

    puts(nombreCompleto);

    return 0;
}
