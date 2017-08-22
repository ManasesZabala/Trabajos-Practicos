#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

char Menu()
{
    char rta;
    printf("\nIngrese una opcion del menu: ");
    printf("\n a-Cargar Vector.");
    printf("\n b-Ordenar Vector.");
    printf("\n c-Mostrar Vector.");
    printf("\n d-Salir");
    printf("\n");
    printf("\nOpcion: ");
    rta=tolower(getche());
        while(rta!= 'a' &&rta!= 'b' &&rta!= 'c' &&rta!= 'd')
    {
        system("cls");
        printf("\nError, opcion ingresada no valida, por favor reingrese.");
        printf("\nIngrese una opcion del menu: ");
        printf("\n a-Cargar Vector.");
        printf("\n b-Ordenar Vector.");
        printf("\n c-Mostrar Vector.");
        printf("\n d-Salir");
        printf("\n");
        printf("\nOpcion: ");
        rta=tolower(getche());
    }
    return rta;
}
//------------------------------------------------------------------------------------
char VolverUtilizar()
{
    char rta;

    printf("\nDesea seguir utilizando la aplicacion? (S/N)");
      rta=tolower(getche());
      while(rta!='s' && rta!='n')
      {
          system("cls");
          printf("\nError opcion ingresada no valida.Por favor reingrese,");
          printf("\nDesea seguir utilizando la aplicacion? (S/N)");
          rta=tolower(getche());
      }

    return rta;

}


//------------------------------------------------------------------------------------
void CargarVector(int vec[],int largo)
{
    int i;
    int cont=1;
    for(i=0;i<largo;i++)
    {
        system("cls");
        printf("\n %d/%d",cont,largo);
        printf("\nIngrese valor: ");
        scanf("%d",&vec[i]);
        cont++;
    }
}
//--------------------------------------------------------------------------------------
void OrdenarVector(int vec[],int largo)
{
    int i;
    int j;
    int aux;
    for(i=0;i<largo-1;i++)
    {
        for(j=i+1;j<largo;j++)
        {
            if(vec[i]>vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
}
//--------------------------------------------------------------------------------------
void MostarVector(int vec[],int largo)
{
    int i;
    for(i=0;i<largo;i++)
    {
        printf("\n%d",vec[i]);
    }
}
//--------------------------------------------------------------------------------------
