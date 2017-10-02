#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include "funciones.h"

//---------------------------------------------------------------------------//
/* 1 */
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
//---------------------------------------------------------------------------//
/* 2 */
void PonerEstadoEnLibre(E_Usuario lista[],int largo)
{
    int i;
     for(i=0;i<largo;i++)
    {
        lista[i].estado=0;
    }
}
//---------------------------------------------------------------------------//
/* 3 */
char VolverAlMenu()
{
    char rta;
    printf("\nDesea volver a utilizar la aplicacion? (S/N)");
    printf("\nSu respuesta: ");
    fflush(stdin);
    rta=tolower(getche());
    while(rta!='s' && rta!='n')
    {
        system("cls");
        printf("\nError, respuesta ingresada no valida.Reingrese.");
        printf("\nDesea volver a utilizar la aplicacion? (S/N)");
        printf("\nSu respuesta: ");
        fflush(stdin);
        rta=tolower(getche());
    }
    return rta;
}
//---------------------------------------------------------------------------//
/* 4 */
int AltaUsuario(E_Usuario lista[],int largo,int posicion)
{
    printf("\nIngrese Nombre: ");
    fflush(stdin);
    gets(lista[posicion].nombre);
    printf("\nIngrese Nick: ");
    fflush(stdin);
    gets(lista[posicion].nick);
    printf("\nIngrese Contrasena: ");
    fflush(stdin);
    gets(lista[posicion].contrasena);
    printf("\nIngrese Correo: ");
    fflush(stdin);
    gets(lista[posicion].mail);

    return 1;
}
//---------------------------------------------------------------------------//
/* 5 */
void ModificarUsuario(E_Usuario lista[],char comparacion[],int largo,int validacion)
{
    int i;
     if(validacion==0)
    {
        printf("\nLo siento, no se ingresaron datos previamente.");
        printf("\n");
        system("pause");
    }
    if(validacion==1)
    {
        for(i=0;i<largo;i++)
        {
         if(strcmp(lista[i].nick,comparacion)==0 && lista[i].estado==1)
         {
            printf("\n Nick encontrado. por favor:");
            printf("\nIngrese nuevo Nombre: ");
            fflush(stdin);
            gets(lista[i].nombre);
            printf("\nIngrese nuevo Nick: ");
            fflush(stdin);
            gets(lista[i].nick);
            printf("\nIngrese nuevo Contrasena: ");
            fflush(stdin);
            gets(lista[i].contrasena);
            printf("\nIngrese nuevo Correo: ");
            fflush(stdin);
            gets(lista[i].mail);
         }
         else
         {
             printf("\nLo siento, el nick ingresado no se encuentra entre la lista de usuarios.");
             printf("\n");
             system("pause");
         }

        }
    }
}

//---------------------------------------------------------------------------//
/* 6 */
void BajaUsuario(E_Usuario lista[],char comparacion[],int largo,int validacion)
{
    int i;
    if(validacion==0)
    {
        printf("\nLo siento, no se ingresaron datos previamente.");
        printf("\n");
        system("pause");
    }

    if(validacion==1)
    {
        for(i=0;i<largo;i++)
        {
         if(strcmp(lista[i].nick,comparacion)==0 && lista[i].estado==1)
         {
             lista[i].estado=0;
             printf("\nEl usuario ha sido borrado correctamente.");
             printf("\n");
             system("pause");
         }
         else
         {
             printf("\nLo siento, el nick ingresado no se encuentra entre la lista de usuarios.");
             printf("\n");
             system("pause");
         }

        }
    }
}
//--------------------------------------------------------------------------------------------------------------------//
/* 7 */
void NuevoComentario(E_Comentario Coment[],int largo,int validacion,int Id,int cont)
{

    if(validacion==0)
    {
        printf("\nError, no se ingresaron datos previamente.");
        system("pause");
    }
    else
    {
        Coment[cont].id=Id;
        printf("\nIngrese comentario: ");
        fflush(stdin);
        gets(Coment[cont].texto);
    }
}

//--------------------------------------------------------------------------------------------------------------------//
/* 8 */

void PonerComentariosEnCero(E_Usuario lista[],E_Comentario Coment[],int largo)
{
    int i;

    for(i=0;i<largo;i++)
    {
        lista[i].contComentario=0;
        Coment[i].megusta=0;
    }
}
//---------------------------------------------------------------------------------------------------------------------//
/* 9*/
void NuevoMeGusta(E_Comentario Coment[],int idDeComentario,int largo,int validacion)
{
    int i;
    if(validacion==0)
    {
        printf("\nError, debe ingresador datos antes.");
    }
    else
    {
        for(i=0;i<largo;i++)
        {
            if(idDeComentario==Coment[i].id)
            {
                Coment[i].megusta++;
            }
        }
    }
}

//---------------------------------------------------------------------------------------------------------------------//

