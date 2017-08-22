#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
#define MAX 5
int main()
{
    char opcion;
    char rta;
    int vector[MAX];
    do
    {
        system("cls");
        opcion=Menu();
        switch(opcion)
        {
            case 'a':
            CargarVector(vector,MAX);
                break;
            case 'b':
            OrdenarVector(vector,MAX);
                break;
            case 'c':
            MostarVector(vector,MAX);
                break;
            case 'd':

                break;


            }
      rta=VolverUtilizar();

    }while(rta=='s');

    return 0;
}
