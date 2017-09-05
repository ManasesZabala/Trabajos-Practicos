#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 4
int main()
{
    int A[MAX];
    int B[MAX];
    int C[MAX];
    int i;
    for(i=0;i<MAX;i++)
    {
        system("cls");
        printf("\n%d/%d",i,MAX);
        printf("\nIngrese valor para el vector A: ");
        scanf("%d",&A[i]);
        printf("\nIngrese valor para el vector B: ");
        scanf("%d",&B[i]);
        if(A[i]>B[i])
        {
            C[i]=B[i];
        }
        else
        {
            C[i]=A[i];
        }

    }
    system("cls");
    printf("\nVector A: ");
    for(i=0;i<MAX;i++)
    {
        printf("\n%d",A[i]);
    }
    printf("\nVector B: ");
    for(i=0;i<MAX;i++)
    {
        printf("\n%d",B[i]);
    }
    printf("\nVector C: ");
    for(i=0;i<MAX;i++)
    {
        printf("\n%d",C[i]);
    }
    return 0;
}
