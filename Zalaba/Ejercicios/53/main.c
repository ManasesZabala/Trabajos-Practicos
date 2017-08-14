#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 5

struct Datos
{
    int legajo;
    int sexo;
};
typedef struct Datos E_Datos;

int main()
{

    E_Datos Datos[MAX];
    int i;
    int cont=1;
    int contHombre=0;

    for(i=0;i<MAX;i++)
    {
        system("cls");
        printf("\n %d / %d",cont,MAX);
        printf("\n Ingrese numero de legajo: ");
        scanf("%d",&Datos[i].legajo);
        printf("\nIngrese tipo de sexo (1-Masculino / 2-Femenino): ");
        scanf("%d",&Datos[i].sexo);
        while(Datos[i].sexo!= 1 && Datos[i].sexo!=2)
        {
            printf("\n Error, tipo de sexo no valido. Reingrese.");
            printf("\n Ingrese numero de legajo: ");
            scanf("%d",&Datos[i].legajo);
            printf("\nIngrese tipo de sexo (1-Masculino / 2-Femenino): ");
            scanf("%d",&Datos[i].sexo);
        }
        if(Datos[i].sexo==1)
        {
            contHombre++;
        }
        cont++;
    }
    printf("\nCantidad de usuarios masculinos ingresados: %d",contHombre);
    for(i=0;i<MAX;i++)
    {
        if(Datos[i].sexo==2)
        {
            printf("\nLegajo: %d",Datos[i].legajo);
        }
    }

    return 0;
}
