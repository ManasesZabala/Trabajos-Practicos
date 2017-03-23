#include <stdio.h>
#include <stdlib.h>
/*
30. Dados 3 números donde el primero y el último son límites de un intervalo,
 indicar si el tercero pertenece a dicho intervalo
*/
int main()
{
    int min,max;
    float num;
    printf("\nIngrese limite minimo: ");
    scanf("%d",&min);
    printf("\nIngrese limite maximo: ");
    scanf("%d",&max);
    printf("\n Ingrese numero: ");
    scanf("%f",&num);
    if(num>=min && num<=max)
    {
        system("cls");
        printf("El numero  pertenece al intervalo.");

    }
    else
    {
        system("cls");
        printf("El numero no pertenece al intervalo");
    }

}
