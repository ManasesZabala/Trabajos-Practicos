#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int Menu();
void Suma();
void Resta();
void Multiplicar();
void Dividir();

int main()
{
    int opcion;
    char rta;
    do
    {
        system("cls");
        opcion=Menu();
        printf("%d",opcion);
        switch(opcion)
        {
        case 1:
            Suma();
            break;
        case 2:
            Resta();
            break;
        case 3:
            Multiplicar();
            break;
        case 4:
            Dividir();
            break;

    }

     printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
     rta=tolower(getche());
     while(rta!='s' && rta!='n')
     {
        printf("\nError. Respuesta ingresada no valida.Por favor reingrese;");
        printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
        rta=tolower(getche());
     }

    }while(rta=='s');

    return 0;
}
//-----------------------------------------------------------------------
int Menu()
{
   char opcion[50];

    printf("\nIngrese una opcion: ");
    printf("\n 1-Suma.");
    printf("\n 2-Resta.");
    printf("\n 3-Multiplicacion.");
    printf("\n 4-Division.");
    printf("\n");
    scanf("%s",opcion);

    while(atoi(opcion)<1 && atoi(opcion)>4)
    {
        system("cls");
        printf("\nError,respuesta ingresada no valida. Por favor reingrese");
        printf("\nIngrese una opcion: ");
        printf("\n 1-Suma.");
        printf("\n 2-Resta.");
        printf("\n 3-Multiplicacion.");
        printf("\n 4-Division.");
        scanf("%s",opcion);
    }
    return atoi(opcion);

}
//--------------------------------------------------------------------------------
void Suma()
{
    system("cls");
    float num1;
    float num2;

    printf("\nIngrese primer numero a Sumar: ");
    scanf("%f",&num1);
    printf("\nIngrese segundo a Sumar: ");
    scanf("%f",&num2);
    printf("\nEl resultado es: %.2f",num1+num2);
}
//--------------------------------------------------------------------------------
void Resta()
{
    system("cls");
    float num1;
    float num2;

    printf("\nIngrese primer numero a Restar: ");
    scanf("%f",&num1);
    printf("\nIngrese segundo a Restar: ");
    scanf("%f",&num2);
    printf("\nEl resultado es: %.2f",num1-num2);
}
//--------------------------------------------------------------------------------
void Multiplicar()
{
    system("cls");
    float num1;
    float num2;

    printf("\nIngrese primer numero a Multiplicar: ");
    scanf("%f",&num1);
    printf("\nIngrese segundo a Multiplicar: ");
    scanf("%f",&num2);
    printf("\nEl resultado es: %.2f",num1*num2);
}
//--------------------------------------------------------------------------------
void Dividir()
{
    system("cls");
    float num1;
    float num2;

    printf("\nIngrese Divisor: ");
    scanf("%f",&num1);
    printf("\nIngrese   Dividendo: ");
    scanf("%f",&num2);
    while(num2==0)
    {
        system("cls");
        printf("\nError, el dividendo no puede ser 0 (cero) por favor reingrese.");
        printf("\nIngrese   Dividendo: ");
        scanf("%f",&num2);
    }
    printf("\nEl resultado es: %.2f",num1/num2);
}
