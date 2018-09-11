#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41] = "";
    char buffer[1000];
    int i;

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

    strlwr(nombreCompleto);

    nombreCompleto[0] = toupper(nombreCompleto[0]);

    for(i = 0; i < strlen(nombreCompleto); i++)
    {
        if(nombreCompleto[i] == ' ')
        {
            nombreCompleto[i + 1] = toupper(nombreCompleto[i + 1]);
        }
    }

    puts(nombreCompleto);

    return 0;
}
