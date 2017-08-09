#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void ImprimirMayoryMenor()
{
    int i;
    int cont=1;
    float lista[4];
    float max;
    float min;
    int flagMax=0;
    int flagMin=0;

    for(i=0;i<5;i++)
    {
        system("cls");
        printf("\nIngrese el numero %d/%d: ",cont,5);
        scanf("%f",&lista[i]);
        cont++;
        if(flagMax==0 || lista[i]>max)
        {
            flagMax=1;
            max=lista[i];
        }
        if(flagMin==0 || lista[i]<min)
        {
            flagMin=1;
            min=lista[i];
        }
    }

    printf("\nEl mayor numero ingresado fue: %.2f",max);
    printf("\nEl menor numero ingresado fue: %.2f",min);

}
