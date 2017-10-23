#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include "funciones.h"
#define MAX 10
int main()
{
    int opcion;
    int j;
    char rta;
    int idTVs=0;
    Estructura_Televisores E_TV[MAX];

    PonerEstadosEnLibre(E_TV,MAX);
    do

    {
        system("cls");

        opcion=Menu();

        switch(opcion)
        {
            case 1:
                Alta(E_TV,MAX);


            break;
            //--------------------------------/
            case 2:

            break;
            //--------------------------------/
            case 3:

            break;
            //--------------------------------/
            case 4:

            break;
            //--------------------------------/
            case 5:

            break;
            //--------------------------------/
            case 6:

            break;
            //--------------------------------/
            case 7:
                Listar(E_TV,MAX);

            break;
            //--------------------------------/
            case 8:

            break;
            //--------------------------------/
            case 9:

            break;
            //--------------------------------/
            case 10:

            break;
            //--------------------------------/
            case 11:

            break;
            //--------------------------------/

        }






    rta=VolverMenu();

    }while(rta=='s');


    return 0;
}
