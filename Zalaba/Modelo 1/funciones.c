#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include "funciones.h"

/*1*/
int Menu()
{
    char opcion[50];
    printf("\nIngrese una opcion del Menu: ");
    printf("\n1- Alta Usuario.");
    printf("\n2-Modificar Datos de usuario.");
    printf("\n3-Baja Usuario;");
    printf("\n4-Nuevo comentario.");
    printf("\n5-Nuevo me gusta.");
    printf("\n6-Informar.");
    printf("\n7-Listar.");
    printf("\n");
    printf("\nSu opcion: ");
    scanf("%s",opcion);
    while(atoi(opcion)<1 || atoi(opcion)>7)
    {
        system("cls");
        printf("\nError, respuesta ingresada no valida.Reingrese.");
        printf("\nIngrese una opcion del Menu: ");
        printf("\n1- Alta Usuario.");
        printf("\n2-Modificar Datos de usuario.");
        printf("\n3-Baja Usuario;");
        printf("\n4-Nuevo comentario.");
        printf("\n5-Nuevo me gusta.");
        printf("\n6-Informar.");
        printf("\n7-Listar.");
        printf("\n");
        printf("\nSu opcion: ");
        scanf("%s",opcion);
    }
    return atoi(opcion);
}
//------------------------------------------------------------------------//

/* 2 */
void PonerEstadosEnLibre(Estructura_Televisores E_TV[],int largo)
{
    int i;

    for(i=0;i<largo;i++)
    {
        E_TV[i].E_LCD.estado=0;
        E_TV[i].E_LED.estado=0;
    }
}
//----------------------------------------------------------------------//
/*3*/
char VolverMenu()
{
    char opcion;

    printf("\nDesea volver al menu? (S/N): ");
    fflush(stdin);
    opcion=tolower(getche());
    while(opcion!='s' && opcion!='n')
    {
        system("cls");
        printf("\nError, respuesta ingresada no valida. Reingrese");
        printf("\nDesea volver al menu? (S/N): ");
        fflush(stdin);
        opcion=tolower(getche());
    }
    return opcion;
}
//----------------------------------------------------------------------//
/*4*/
void Alta(Estructura_Televisores E_TV[],int largo)
{
    int opcionTV;
    int i;
    printf("\n Ingrese opcion: ");
    printf("\n1-LED / 2-LCD");
    printf("\nSu opcion: ");
    scanf("%d",&opcionTV);
    while(opcionTV!=1 && opcionTV!=2)
    {
        system("cls");
        printf("\nError, respuesta ingresada no valida. Reingrese.");
        printf("\n Ingrese opcion: ");
        printf("\n1-LED / 2-LCD");
        printf("\nSu opcion: ");
        scanf("%d",&opcionTV);

    }
    if(opcionTV==1)
    {
        system("cls");

        for(i=0;i<largo;i++)
        {
            if(E_TV[i].E_LED.estado==0)
            {
                printf("\nIngrese nombre del televisor LED: ");
                fflush(stdin);
                gets(E_TV[i].E_LED.nombre);
                printf("\nIngrese direccion del televisor LED: ");
                fflush(stdin);
                gets(E_TV[i].E_LED.direccion);
                printf("\nIngrese precio del televisor LED: ");
                fflush(stdin);
                scanf("%f",&E_TV[i].E_LED.precio);
                E_TV[i].E_LED.estado=1;
                break;

            }
        }

    }
    if(opcionTV==2)
    {
        for(i=0;i<largo;i++)
        {
            if(E_TV[i].E_LED.estado==0)
            {
            system("cls");
            printf("\nIngrese nombre del televisor LCD: ");
            fflush(stdin);
            gets(E_TV[i].E_LCD.nombre);
            printf("\nIngrese direccion del televisor LCD: ");
            fflush(stdin);
            gets(E_TV[i].E_LCD.direccion);
            printf("\nIngrese precio del televisor LCD: ");
            fflush(stdin);
            scanf("%f",&E_TV[i].E_LCD.precio);
            E_TV[i].E_LCD.estado=1;
            break;
            }
        }
    }



}
//----------------------------------------------------------------------//
/*5*/
void Listar(Estructura_Televisores E_TV[],int largo)
{
    int i;
    printf("\nLCD");
    for(i=0;i<largo;i++)
    {
        if(E_TV[i].E_LCD.estado==1)
        {
            printf("\nNombre: %s",E_TV[i].E_LCD.nombre);
            printf("\nDireccion: %s",E_TV[i].E_LCD.direccion);
            printf("\nPrecio: %.2f",E_TV[i].E_LCD.precio);
        }

    }
    printf("\nLED");
       for(i=0;i<largo;i++)
        {
            if(E_TV[i].E_LED.estado==1)
            {
                printf("\nNombre: %s",E_TV[i].E_LED.nombre);
                printf("\nDireccion: %s",E_TV[i].E_LED.direccion);
                printf("\nPrecio: %.2f",E_TV[i].E_LED.precio);
            }

        }

}
