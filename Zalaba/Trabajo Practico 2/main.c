#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"
#define MAX 20
int x;
int main()
{
    E_Persona Persona[MAX];
    int opcion;
    int j=0;
    int i;
    int auxPosicion;
    char rta;
    for(i=0;i<MAX;i++)
    {
        Persona[i].estado=0;
    }
    do
    {
        opcion=Menu();
         switch(opcion)
        {
            case 1:
            Persona[j].estado=AgregarPersona(Persona,j);
            j++;//aumento la posicion a medida que se van ingresando datos
            break;
            case 2:
            printf("\nIngrese posicion que desea borrar: ");
            scanf("%d",&auxPosicion);
            Persona[i].estado=BorrarPersona(Persona,auxPosicion,Persona[auxPosicion].estado);

            break;
            case 3:
            OrdenarListado(Persona,j);
            break;
            case 4:
            //No pude resolver.

           break;
        }
      rta=VolverMenu();

    }while (rta=='s');
    system("cls");
    printf("\n");
    printf("\n Thanks for choosing us. Have a nice day!");
    printf("\n");
    printf("\n");

    return 0;

}
