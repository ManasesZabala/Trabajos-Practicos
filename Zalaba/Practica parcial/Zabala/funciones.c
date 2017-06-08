#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
//  1 -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int Menu()
{
    char opcion[50];
    printf("\nIngrese una opcion del menu: ");
    printf("\n 1-Alta de usuario.");
    printf("\n 2-Modificar datos del usuario.");
    printf("\n 3-Baja del usuario.");
    printf("\n 4-Publicar Producto.");
    printf("\n 5-Modificar publicacion.");
    printf("\n 6-Cancelar Publicacion.");
    printf("\n 7-Comprar producto.");
    printf("\n 8-Listar publicaciones del usuario.");
    printf("\n 9-Listar Publicaciones.");
    printf("\n 10-Listar Usuarios.");
    printf("\n 11-Salir.");
    printf("\n");
    scanf("%s",opcion);
    while(atoi(opcion) < 1 || atoi(opcion) > 11)
    {
        system("cls");
        printf("\nError opcion invalida, por favor ingrese una opcion.");
        printf("\nIngrese una opcion del menu: ");
        printf("\n 1-Alta de usuario.");
        printf("\n 2-Modificar datos del usuario.");
        printf("\n 3-Baja del usuario.");
        printf("\n 4-Publicar Producto.");
        printf("\n 5-Modificar publicacion.");
        printf("\n 6-Cancelar Publicacion.");
        printf("\n 7-Comprar producto.");
        printf("\n 8-Listar publicaciones del usuario.");
        printf("\n 9-Listar Publicaciones.");
        printf("\n 10-Listar Usuarios.");
        printf("\n 11-Salir.");
        printf("\n");
        scanf("%s",opcion);
    }
    return atoi(opcion);
}
//  2 -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
char VolverMenu()
{
    char rta;
    printf("\nDesea volver a utilizar la aplicacion? (S/N)");
    fflush(stdin);
    scanf("%c",&rta);
       while(rta!='s' && rta!='n')
       {
           system("cls");
           printf("\n Error, respues equivocada. Reingrese S o N.");
           printf("\nDesea volver a utilizar la aplicacion? (S/N)");
           fflush(stdin);
           scanf("%c",&rta);
       }
       return rta;
}
 // 3 -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void AltaUsuario(E_Usuario usuarios[],int posicion)
 {
     if(posicion == -1)
     {
         printf("\nError la lista de usuarios esta completa.");

     }
     else
     {
         printf("\nIngrese nombre de usuario: ");
         scanf("%s",usuarios[posicion].nombre);
        printf("\nIngrese contrasena de usuario: ");
         scanf("%s",usuarios[posicion].contrasena);
         usuarios[posicion].id=posicion;
     }

 }

 //  4 -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 void MostrarListaUsuario(E_Usuario usuarios[],E_Producto productos[],int LARGO)
 {
     int i;
     int aux;
     int cont=1;
     for(i=0;i<LARGO;i++)
     {
        printf("\n Nombre:%s",usuarios[i].nombre);
        printf("\n Constrasena:%s",usuarios[i].contrasena);
        printf("\n cantidad de productos: %d",usuarios[i].contProducto);
        for(i=0;i<1000;i++)
        {
            aux=usuarios[i].idProducto[i];
            printf("Nombre del pruducto %d : %s",cont,productos[aux].nombreProducto);
        }
     }
 }

 //  5 ----------------------------------------------------------------------------------------------------------------------------------------

 int BuscarLibre(E_Usuario usuarios[],int LARGO)
 {
     int libre;
     int i;
     for(i=0;i<LARGO;i++)
     {
         if(usuarios[i].ocupado==0)
         {
             libre=i;
             usuarios[i].ocupado=1;
             return libre;
             break;
         }

     }
       return -1;
 }

 //  6 ----------------------------------------------------------------------------------------------------------------------------------------
    void CargarEspaciosLibres(E_Usuario usuarios[],int LARGO)
    {
        int i;
        for(i=0;i<LARGO;i++)
        {
            usuarios[i].ocupado=0;
            usuarios[i].contProducto=0;
        }

    }
 //  7 ----------------------------------------------------------------------------------------------------------------------------------------
void ModificarUsuario(E_Usuario usuarios[],int LARGO)
{
    char auxNombre[50];
    char auxContrasena[50];
    int i;
    char letra;
    int auxint;
    printf("\nIngrese Nombre de usuario a cambiar: ");
    fflush(stdin);
    scanf("%s",auxNombre);
    printf("\nIngrese Nombre de contrasena a cambiar: ");
    fflush(stdin);
    scanf("%s",auxContrasena);
    for(i=0;i<LARGO;i++)
    {

        if((strcmp(auxNombre,usuarios[i].nombre))==0 && usuarios[i].ocupado==1)
        {
            system("cls");
            auxint=i;
            printf("\nLos datos del usuario son: ");
            printf("\n Nombre: %s",usuarios[i].nombre);
            printf("\n Contrasena: %s",usuarios[i].contrasena);
            printf("\n");
            printf("\nSeguro que desea modificar estos datos? (S/N)");
            fflush(stdin);
            scanf("%c",&letra);
            while(letra!='s' && letra!='n')
            {
                printf("\n Error. Respuesta equivocada, reingrese S o N");
                printf("\nSeguro que desea modificar estos datos? (S/N)");
                printf("\nLos datos del usuario son: ");
                printf("\n Nombre: %s",usuarios[i].nombre);
                printf("\n Contrasena: %s",usuarios[i].contrasena);
                printf("\n");
                fflush(stdin);
                scanf("%c",&letra);
            }
            if(letra=='s')
            {
                printf("\nIngrese nombre de usuario nuevo: ");
                fflush(stdin);
                scanf("%s",auxNombre);
                printf("\nIngrese contrasena de usuario nuevo: ");
                fflush(stdin);
                scanf("%s",auxContrasena);
                strcpy(usuarios[i].contrasena,auxContrasena);
                strcpy(usuarios[i].nombre,auxNombre);
                printf("\nLos datos que quedaron guardados en sistema son:");
                printf("\n Nombre: %s",usuarios[auxint].nombre);
                printf("\n Contrasena: %s",usuarios[auxint].contrasena);
                printf("\n");

            }
        }
        if(usuarios[i].ocupado==-1)
        {
            printf("\n Error. El usuario a sido borrado anteriormente.");
        }
    }

}
//  8 ----------------------------------------------------------------------------------------------------------------------------------------

void BajarUsuario(E_Usuario usuarios[],int LARGO)
{
    char auxNombre[50];
    char auxContrasena[50];
    int i;
    char letra;
    printf("\nIngrese Nombre de usuario a borrar: ");
    fflush(stdin);
    scanf("%s",auxNombre);
    printf("\nIngrese Contrasena de usuario a borrar: ");
    fflush(stdin);
    scanf("%s",auxContrasena);
    for(i=0;i<LARGO;i++)
    {

        if((strcmp(auxNombre,usuarios[i].nombre))==0 &&usuarios[i].ocupado==1)
        {
            system("cls");
            printf("\nLos datos del usuario son: ");
            printf("\n Nombre: %s",usuarios[i].nombre);
            printf("\n Contrasena: %s",usuarios[i].contrasena);
            printf("\n");
            printf("\nSeguro que desea borrar estos datos? (S/N)");
            fflush(stdin);
            scanf("%c",&letra);
            while(letra!='s' && letra!='n')
            {
                printf("\n Error. Respuesta equivocada, reingrese S o N");
                printf("\nSeguro que desea borrar estos datos? (S/N)");
                printf("\nLos datos del usuario son: ");
                printf("\n Nombre: %s",usuarios[i].nombre);
                printf("\n Contrasena: %s",usuarios[i].contrasena);
                printf("\n");
                fflush(stdin);
                scanf("%c",&letra);
            }
            if(letra=='s')
            {
                usuarios[i].ocupado=-1;
                printf("\n El usuario a sido eliminado satisfactoriamente.");
            }
        }
        if(usuarios[i].ocupado==-1)
        {
            printf("\n Error. El usuario a sido borrado anteriormente.");
        }
    }
}
//  9 ----------------------------------------------------------------------------------------------------------------------------------------
void PublicarProducto(E_Usuario usuarios[],E_Producto productos[],int LARGO)
{
    char auxNombre[50];
    char auxContrasena[50];
    int i;
    int aux;

    printf("\n Ingrese nombre de usuario: ");
    fflush(stdin);
    scanf("%s",auxNombre);
    printf("\n Ingrese contrasena: ");
    fflush(stdin);
    scanf("%s",auxContrasena);

    for(i=0;i<LARGO;i++)
    {
        if((strcmp(auxNombre,usuarios[i].nombre))==0 &&usuarios[i].ocupado==1)
        {
            printf("\nIngrese nombre de producto");
            fflush(stdin);
            scanf("%s",productos[i].nombreProducto);
            printf("\nIngrese precio de producto");
            fflush(stdin);
            scanf("%f",&productos[i].precioProducto);
            printf("\nIngrese stock de producto");
            fflush(stdin);
            scanf("%d",&productos[i].stockProducto);
            aux=usuarios[i].contProducto;
            usuarios[i].idProducto[aux]=aux;
            usuarios[i].contProducto++;

        }
         if ((strcmp(auxNombre,usuarios[i].nombre))==1 || usuarios[i].ocupado==0)
        {
            printf("\nError usuario no existe en la base de datos.");
        }
    }
}
