#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
main()
{


    float num1;
    float num2;
    float resultado;
    int rta;
    char app;
    do
    {
            system("cls");
            rta=Menu();
            switch(rta)
            {
            case 1:
                printf("\nIngrese numero 1 a sumar: ");
                scanf("%f",&num1);
                printf("\nIngrese numero 2 a sumar: ");
                scanf("%f",&num2);
                resultado=Sumar(num1,num2);
                printf("\nEl resultado del a suma es: %.2f", resultado);
                break;
            case 2:
                printf("\nIngrese numero 1 a restar: ");
                scanf("%f",&num1);
                printf("\nIngrese numero 2 a restar: ");
                scanf("%f",&num2);
                resultado=Restar(num1,num2);
                printf("\nEl resultado del a restma es: %.2f", resultado);
                break;
            case 3:
                printf("\nIngrese numero 1 a Multiplicar: ");
                scanf("%f",&num1);
                printf("\nIngrese numero 2 a Multiplicar: ");
                scanf("%f",&num2);
                resultado=Multiplicar(num1,num2);
                printf("\nEl resultado del a Multiplicacion es: %.2f", resultado);
                break;
            case 4:
                printf("\nIngrese numero 1 a Dividir: ");
                scanf("%f",&num1);
                printf("\nIngrese numero 2 a Dividir: ");
                scanf("%f",&num2);
                while(num2==0)
                {
                    system("cls");
                    printf("\nError no se puede dividir por cero: Reingrese numero 2: ");
                    scanf("%f",&num2);
                }
                resultado=Dividir(num1,num2);
                printf("\nEl resultado del a Divicion es: %.2f", resultado);
                break;
            case 5:
                break;

            }
            printf("\nDesea volver a utilizar la aplicacion?(S/N): ");
            app=tolower(getche());
            while(app!='s' && app!='n')
            {
                system("cls");
            printf("\nError respuesta distinta de S o N.\n Reingrese: Desea volver a utilizar la aplicacion?(S/N): ");
            app=tolower(getche());
            }

    }while(app=='s');


}
