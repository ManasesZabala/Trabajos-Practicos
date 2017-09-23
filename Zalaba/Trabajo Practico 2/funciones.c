#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include "funciones.h"
//----------------------------------------------------------------------------//
/* 1 */
int Menu()
{
    system("cls");
    char opcion[20];// Lo pido con char para asegurarme de que,en caso de que el usuario oprima una tecla, el programa no se rompa.
    printf("\nPor favor seleccione una opcion del menu: ");
    printf("\n 1-Agregar persona.");
    printf("\n 2-Borrar persona.");
    printf("\n 3-Imprimir lista ordenada por nombre.");
    printf("\n 4-Imprimir grafico de edades.");
    printf("\n");
    printf("\nSu opcion: ");
    fflush(stdin);
    scanf("%s",opcion);
    while(atoi(opcion)<1 || atoi(opcion)>4)
    {
        system("cls");
        printf("\nError, opcion ingresada no valida, por favor reingrese.");
        printf("\nPor favor seleccione una opcion del menu: ");
        printf("\n 1-Agregar persona.");
        printf("\n 2-Borrar persona.");
        printf("\n 3-Imprimir lista ordenada por nombre.");
        printf("\n 4-Imprimir grafico de edades.");
        printf("\n");
        printf("\nSu opcion: ");
        fflush(stdin);
        scanf("%s",opcion);
    }

    return atoi(opcion);

}
//----------------------------------------------------------------------------//
/* 2 */
char VolverMenu()//Pregunto si quiere volver a utilizar la aplicacion.
{
    char rta;
        printf("\nDesea volver a utilizar la aplicacion? (S/N)");
        rta=tolower(getche());//Cambio el caracter a minuscula. Asi me aseguro que siempre este en minuscula.
        while(rta!='s' && rta!='n')//en caso que no ingrese ni S ni N, le muestro un error de que oprimio otra tecla.
        {
            system("cls");
            printf("\n Error, respuesta ingresada no valida. Por favor reingrese.");
            printf("\nDesea volver a utilizar la aplicacion? (S/N)");
            rta=tolower(getche());
        }
        return rta;

}
//----------------------------------------------------------------------------//
/*3*/
int AgregarPersona(E_Persona Persona[],int posicion)//Pido el array y la posicion para agregar los datos en dicha posicion.
{
        printf("\nPor favor ingrese su nombre: ");
        fflush(stdin);
        gets(Persona[posicion].nombre);
        printf("\nPor favor, ingrese edad: ");
        scanf("%d",&Persona[posicion].edad);
        printf("\nPor favor ingrese DNI: ");
        scanf("%d",&Persona[posicion].dni);
    return 1;
}
//----------------------------------------------------------------------------//
/* 4 */
int BorrarPersona(E_Persona Persona[],int posicion,int estado)
{
    if(estado==0)//Muestra error si la posicion esta vacia.
    {
        printf("\nError, la posicion de memoria ya se encuenta vacia.");
    }
    else//cambia el estado del espacio a cero.
    {
        Persona[posicion].estado=0;
    }

    return 0;
}
//----------------------------------------------------------------------------//
/* 5 */
void OrdenarListado(E_Persona Persona[],int largo)
{
    int auxInt;
    int i=0;
    int j;
    char auxNombre[50];


    for(i=0;i<largo-1;i++)//Ordeno lista
    {
        for(j=i+1;j<largo;j++)
        {
            if(Persona[i].nombre<Persona[j].nombre)
            {
                strcpy(auxNombre,Persona[i].nombre);
                strcpy(Persona[i].nombre,Persona[j].nombre);
                strcpy(Persona[j].nombre,auxNombre);

                auxInt=Persona[i].edad;
                Persona[i].edad=Persona[j].edad;
                Persona[j].edad=auxInt;

                auxInt=Persona[i].dni;
                Persona[i].dni=Persona[j].dni;
                Persona[j].dni=auxInt;


            }
        }

    }

    system("cls");
    for(i=0;i<largo;i++)//Muestro lista
    {
        printf("\nNombre: %s",Persona[i].nombre);
        printf("\nDNI: %d",Persona[i].dni);
        printf("\nEdad: %d",Persona[i].edad);

    }
}


