#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 31

int main()
{
    int cont=1;
    int i;
    int flag=0;
    int diaMax;
    float max;
    float gasto[MAX];

    for(i=0;i<MAX;i++)
    {

        system("cls");
        printf("\nDia: %d/%d",cont,MAX);
        printf("\nIngrese gasto realizado: ");
        scanf("%f",&gasto[i]);
        if(flag==0 || gasto[i]>max)
        {
            flag=1;
            max=gasto[i];
            diaMax=cont;
        }



        cont++;


    }
    system("cls");
    printf("\nEl dia de mas gasto fue: \nDia: %d\nGasto: %.2f",diaMax,max);
}
