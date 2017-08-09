#include <stdio.h>
#include <stdlib.h>

int main()
{
   char letra;
   char rta;
   int i;

   do
    {
        system("cls");

        printf("\n Ingrese letra: ");
        fflush(stdin);
        scanf("%c",&letra);

        printf("\n%c",letra);
        printf("\n\t%c",letra);
        printf("\n\t\t%c",letra);
        printf("\n\t\t\t%c",letra);




        printf("\nDesea volver a utilizar la aplicacion (S/N): ");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            printf("\nError respuesta equivocada. Reingrese.");
            printf("\nDesea volver a utilizar la aplicacion (S/N): ");
            rta=tolower(getche());
        }

    }while(rta=='s');


}
