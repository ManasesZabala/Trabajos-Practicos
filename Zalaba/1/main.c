#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include "funciones.h"
#define MAX 1000

int main()
{

    E_Usuario E_Usuario[MAX];
    E_Comentario E_Comentario[MAX];
    char rta;
    char opcionMenu;
    char auxchar[50];
    char auxchar2[50];
    int validacion=0;
    int i;
    int auxint;
    int cont=0;
    int j=0;
    PonerEstadoEnLibre(E_Usuario,MAX);
    PonerComentariosEnCero(E_Usuario,E_Comentario,MAX);
    do
    {
        system("cls");
        opcionMenu=Menu();
        switch(opcionMenu)
        {
            case 1:
                E_Usuario[j].estado=AltaUsuario(E_Usuario,MAX,j);
                j++;
                validacion=1;
            break;
             case 2:
                 printf("\nIngrese nick que desea modificar: ");
                 fflush(stdin);
                 gets(auxchar);
                 ModificarUsuario(E_Usuario,auxchar,j,validacion);
            break;
             case 3:
                 printf("\nIngrese nick que desea borrar: ");
                 fflush(stdin);
                 gets(auxchar);
                 BajaUsuario(E_Usuario,auxchar,j,validacion);
            break;
             case 4:
                 printf("\nIngrese su Nick: ");
                 fflush(stdin);
                 gets(auxchar);
                 printf("\nIngrese su contrasena: ");
                 fflush(stdin);
                 gets(auxchar2);
                 for(i=0;i<j;i++)
                 {
                     if(strcmp(auxchar,E_Usuario[i].nick)==0 && strcmp(auxchar2,E_Usuario[i].contrasena)==0)
                     {
                         E_Usuario[i].idComentario[E_Usuario[i].contComentario]=E_Usuario[i].contComentario;
                         NuevoComentario(E_Comentario,j,validacion,E_Usuario[i].idComentario,cont);
                         E_Usuario[i].contComentario++;

                     }

                     cont++;
                 }
            break;
             case 5:
                 printf("\nIngrese Nick: ");
                 fflush(stdin);
                 gets(auxchar);
                 printf("\nIngrese contrasena: ");
                 fflush(stdin);
                 gets(auxchar2);
                 printf("\nIngrese id de comentario: ");
                 scanf("%d",&auxint);
                 if(strcmp(auxchar,E_Usuario[i].nick)==0 && strcmp(auxchar2,E_Usuario[i].contrasena)==0)
                     {


                     }
            break;
             case 6:

            break;
             case 7:
            break;
             case 8:
            break;

        }

    rta=VolverAlMenu();
    }while(rta=='s');
    return 0;
}
