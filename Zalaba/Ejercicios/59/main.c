#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 20
int main()
{
    int numeros[MAX];
    char rta;
    int flag=0;
    int posicion;
    int i;
    int maximo;
    int cont=1;
   do
   {
       cont=1;
       for(i=0;i<MAX;i++)
       {
           system("cls");
           printf("\n %d/%d",cont,MAX);
           printf("\nIngrese numero: ");
           scanf("%d",&numeros[i]);
           cont++;
           if(flag==0 || numeros[i]>maximo)
           {
               flag=1;
               maximo=numeros[i];
               posicion=cont;
           }
       }
       printf("\n");
       for(i=0;i<MAX;i++)
       {

           printf("\n%d",numeros[i]);
       }
        printf("\n numero: %d \n posicion: %d",maximo,posicion-1);

       printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            system("cls");
            printf("\nError, respuesta ingresada no valida. Por favor reingrese.");
            printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
            rta=tolower(getche());

        }

    }while(rta=='s');

}
