#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int ano;
    char rta;
    int resto;
    int resto2;
    int resto3;
    do
    {
        system("cls");
        printf("\nIngrese ano: ");
        scanf("%d",&ano);

        resto=ano%4;
        resto2=ano%400;
        resto3=ano%100;

        if(resto==0 && resto2==0 && resto3==0)
        {
            printf("\nEl ano ingresado es bisiesto.");
        }
        else
            {
                printf("\nEl ano ingresado no es bisiesto.");
            }





        printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            system("cls");
            printf("\n Error, respuesta ingresada no valida, por favor reingrese.");
            printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
            rta=tolower(getche());
        }

    }while(rta=='s');

}
