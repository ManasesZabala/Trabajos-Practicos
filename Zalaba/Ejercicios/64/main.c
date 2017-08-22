#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
int main()
{
    int vector[MAX];
    int positivos[MAX];
    int negativos [MAX];
    int i;
    int aux;
    int cont=1;
    int j=0;
    int t=0;
    int z;
    for(i=0;i<MAX;i++)
    {
        system("cls");
        printf("\n%d/%d",cont,MAX);
        printf("\n Ingrese numero distinto de cero: ");
        scanf("%d",&vector[i]);
        while(vector[i]==0)
        {
            system("cls");
            printf("\nError, el numero ingresado debe ser distinto de cero. Por favor reingrese.");
            printf("\n%d/%d",cont,MAX);
            printf("\n Ingrese numero distinto de cero: ");
            scanf("%d",&vector[i]);
        }
        if(vector[i]>0)
        {
            positivos[j]=vector[i];
            j++;
        }
        if(vector[i]<0)
        {
            negativos[t]=vector[i];
            t++;
        }
        cont++;
    }

    system("cls");

    printf("\nVector: ");
        for(i=0;i<MAX;i++)
        {
        printf("\n%d",vector[i]);
        }

    printf("\nPositivos: ");
        for(i=0;i<j-1;i++)
        {
            for(z=i+1;z<j;z++)
            {
                if(positivos[i]<positivos[z])
                {
                    aux=positivos[z];
                    positivos[z]=positivos[i];
                    positivos[i]=aux;
                }
            }


        }
        for(i=0;i<t;i++)
        {
        printf("\n%d",positivos[i]);
        }

    printf("\nNegativos: ");
     for(i=0;i<t-1;i++)
        {
            for(z=i+1;z<t;z++)
            {
                if(negativos[i]>negativos[z])
                {
                    aux=negativos[z];
                    negativos[z]=negativos[i];
                    negativos[i]=aux;
                }
            }


        }
        for(i=0;i<t;i++)
        {
        printf("\n%d",negativos[i]);
        }
}
