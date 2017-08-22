#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main()
{
    int i;
    int cont=1;
    int vec[MAX];
    char opcion;
    CargarVector(vec,MAX);
    system("cls");
    printf("\nVector cargado.");
    opcion=Menu();

    switch(opcion)
    {
        case 'a':
            MuestroPosicion(vec,MAX);

            break;

        case 'b':
            MuestoNumero(vec,MAX);
            break;
    }
    return 0;
}
