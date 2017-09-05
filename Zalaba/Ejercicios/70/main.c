#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5][6];
    int i;
    int j;
    int contJ=1;
    int contI=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            system("cls");
            printf("\n FILA: %d \n COLUMNA %d",contI,contJ);
            printf("\nIngrese numero: ");
            scanf("%d",&numeros[i][j]);
            contJ++;
        }
        contI++;
        contJ=1;
    }
    system("cls");
    contI=1;
    contJ=1;
    for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=0;j<6;j++)
        {
            printf("\n FILA: %d \n COLUMNA %d",contI,contJ);
            printf("\nNumero: %d",numeros[i][j]);
             contJ++;
        }
        contI++;
        contJ=1;
    }

    return 0;
}
