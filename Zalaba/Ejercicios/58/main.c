#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
int main()
{
char rta;
int cont=1;
int i;
int num[MAX];

    do
    {
        cont=1;
        system("cls");
        for(i=0;i<MAX;i++)
        {
            system("cls");
            printf("\n %d/%d",cont,MAX);
            printf("\nIngrese numero: ");
            scanf("%d",&num[i]);
            cont++;
        }
        for(i=0;i<MAX;i++)
        {
            printf("\n%d",num[i]);
        }



        printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            printf("\nError, respuesta ingresada no valida. Por favor reingrese.");
            printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
            rta=tolower(getche());

        }

    }while(rta=='s');
    return 0;
}


