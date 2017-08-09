#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    float num3;
    printf("\nIngrese numero 1:");
    scanf("%f",&num1);
    printf("\nIngrese numero 2:");
    scanf("%f",&num2);
    printf("\nIngrese numero 3:");
    scanf("%f",&num3);
    if(num3>=num1 && num3<=num2)
    {
        printf("\n El numero %.2f se encuentra entre %.2f y %.2f",num3,num1,num2);
    }
    else
    {
        printf("\n El numero %.2f no pertenece al intervalo de %.2f y %.2f.",num3,num1,num3);
    }
}
