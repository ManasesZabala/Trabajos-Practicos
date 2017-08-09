#include <stdio.h>
#include <stdlib.h>
struct Datos
{
    char fecha[500];
    int tempMax;
    int tempMin;
};
typedef struct Datos E_Datos;

int main()
{
    E_Datos Datos[500];
    char rta;
    int i=0;
    int max;
    int min;
    int flagMax=0;
    int flagMin=0;
    char fechaMax[500];
    char fechaMin[500];
    do
    {

        printf("\nIngrese fecha: ");
        fflush(stdin);
        scanf("%s",Datos[i].fecha);
        printf("\nIngrese temperatura max del dia: ");
        scanf("%d",&Datos[i].tempMax);
        if(flagMax==0 || Datos[i].tempMax>max)
        {

            strcpy(fechaMax,Datos[i].fecha);
            flagMax=1;
            max=Datos[i].tempMax;
        }

        printf("\nIngrese temperatura min del dia: ");
        scanf("%d",&Datos[i].tempMin);

        if(flagMin==0 || Datos[i].tempMin<min)
        {

            strcpy(fechaMin,Datos[i].fecha);
            flagMin=1;
            min=Datos[i].tempMin;
        }

//---------------------------------------------------------------------------------------------//
        printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            system("cls");
            printf("\nError respues ingresada invalida. Reingrese.");
            printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
            rta=tolower(getche());
        }
    i++;
    }while(rta=='s');

    printf("\nEl dia mas caluroso fue: %s con una temperatura de %d ",fechaMax,max);
    printf("\nEl dia mas frio fue: %s con una temperatura de %d ",fechaMin,min);

    return 0;
}
