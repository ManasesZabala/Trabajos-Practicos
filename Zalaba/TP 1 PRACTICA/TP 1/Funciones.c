#include<stdio.h>
#include<stdlib.h>
float Sumar(float num1,float num2)
{
    float resultado;
    resultado=num1+num2;
    return resultado;
}
float Restar(float num1,float num2)
{
    float resultado;
    resultado=num1-num2;
    return resultado;
}
float Multiplicar(float num1,float num2)
{
    float resultado;
    resultado=num1*num2;
    return resultado;
}
float Dividir(float num1,float num2)
{
    float resultado;

    resultado=num1/num2;
    return resultado;
}
int Menu()
{
    int menu;
    printf("\nElija una opcion numerica del menu: ");
    printf("\n 1 - Sumar");
    printf("\n 2 - Restar");
    printf("\n 3 - Multiplicar");
    printf("\n 4 - Dividir");
    printf("\n 5 - Salir");
    printf("\n");
    scanf("%d",&menu);
    while(menu!= 1 && menu!=2 && menu!=3 && menu!=4 && menu!=5)
    {
        system("cls");
        printf("\nError opcion no valida entre las posibles. Reingrese:");
        printf("\n 1 - Sumar");
        printf("\n 2 - Restar");
        printf("\n 3 - Multiplicar");
        printf("\n 4 - Dividir");
        printf("\n 5 - Salir");
        printf("\n");
        scanf("%d",&menu);
    }
    return menu;

}
