#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void CalcularCantidadAgua()
{
    float agua;
    float total=0;
    float max;
    float min;
    float promedio;
    int mes;
    int i;
    int cont=1;
    int flagMax=0;
    int flagMin=0;
    int diamax;
    int diamin;


    printf("\nIngrese cantidad de dias del mes: ");
    scanf("%d",&mes);

    for(i=1;i<=mes;i++)
    {
        printf("\nIngrese cantidad de agua caida del dia %d/%d: ",cont,mes);
        scanf("%f",&agua);
        total=total+agua;

        if(flagMax==0 || agua>max)
        {
            flagMax=1;
            max=agua;
            diamax=i;
        }
        if(flagMin==0 || agua<min)
        {
            flagMin=1;
            min=agua;
            diamin=i;
        }
        cont++;
    }
    promedio=total/mes;
    printf("\nEl dia que cayo menos agua fue: %d",diamin);
    printf("\nEl dia que cayo mas agua fue: %d",diamax);
    printf("\nEl promedio de agua caida es: %.2f",promedio);


}
