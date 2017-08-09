#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
struct Lista
{
    char nombre[500];
    char apellido[500];
    float altura;
};
typedef struct Lista E_Lista;

int main()
{
    E_Lista Lista[500];
    int alumnos;
    int i;
    int cont=1;
    int flag=0;
    float max;
    char nombreMax[500];
    char apellidoMax[500];

    printf("\nIngrese la cantidad de alumnos: ");
    scanf("%d",&alumnos);

    for(i=0;i<alumnos;i++)
    {
     system("cls");
     printf("\nIngrese nombre del alumno %d/%d: ",cont,alumnos);
     fflush(stdin);
     scanf("%s",Lista[i].nombre);
     printf("\nIngrese apellido del alumno %d/%d: ",cont,alumnos);
     fflush(stdin);
     scanf("%s",Lista[i].apellido);
     printf("\nIngrese altura del alumno %d/%d: ",cont,alumnos);
     scanf("%f",&Lista[i].altura);
     cont++;
     if(flag==0 || Lista[i].altura>max)
     {
         flag=1;
         strcpy(nombreMax,Lista[i].nombre);
         strcpy(apellidoMax,Lista[i].apellido);
         max=Lista[i].altura;
     }
    }
    printf("\nEl alumno mas alto es: %s %s midiendo %.2f mts",nombreMax,apellidoMax,max);


    return 0;
}
