#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 20

int main()
{
    char rta;
    int i;
    int j;
    int cont;
    int num[MAX];
    int aux;
    do
    {
        system("cls");
        cont=1;
           for(i=0;i<MAX;i++)
           {
               system("cls");
               printf("\n%d/%d",cont,MAX);
               printf("\nIngrese numero: ");
               scanf("%d",&num[i]);
               while(num[i]<0)
               {
                   system("cls");
                   printf("\n Error numero ingresado no valido. El numero debe ser positivo. Por favor reingrese.");
                   printf("\nIngrese numero: ");
                   scanf("%d",&num[i]);
               }
               cont++;
           }
           system("cls");
           printf("\n Vector tal cual fue ingresado: ");
             for(i=0;i<MAX;i++)
                {
                    printf("\n%d",num[i]);
                }
            printf("\nVector Ordenado de manera decreciente: ");
            for(i=0;i<MAX-1;i++)
            {
                for(j=i+1;j<MAX;j++)
                {
                    if(num[j]>num[i])
                    {
                        aux=num[i];
                        num[i]=num[j];
                        num[j]=aux;
                    }
                }
            }
            for(i=0;i<MAX;i++)
            {
                printf("\n%d",num[i]);
            }

        printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            system("cls");
            printf("\n Error,respuesta ingresada no valida.Por favor reingrese.");
            printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
            rta=tolower(getche());
        }
    }while(rta=='s');
}
