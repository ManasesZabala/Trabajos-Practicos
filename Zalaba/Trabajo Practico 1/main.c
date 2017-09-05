#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"
int main()
{
    int opcion;//Para elegir una opcion del menu.
    char rta;//Para controlar si se desea volver a utilizar o no.
    int flag=0;//Para controlar que se ingresaron numeros.
    int flag2=0;//Para controlar que se ingresaron numeros.
    float x;//Para guardar la primer variable.
    float y;//Para guardar la segunda variable.
    float resultado;//Para guardar y mostrar el resultado de la operacion.
    do
    {
        system("cls");//Limpia la pantalla para una mejor comprencion.

        opcion=Menu();

        switch(opcion)
        {
        case 1:
            x=TomarNum1();
            flag=1;//Cambio el flag para indicar que se ingreso la primer variable
            break;
        case 2:
            y=TomarNum2();
            flag2=1;//Cambio el flag para indicar que se ingreso la segunda variable
            break;
        case 3:
            resultado=Sumar(x,y,flag,flag2);//Envio los flags para comprobar el ingreso de variables
            printf("\nEl resultado de la Suma es: %.2f",resultado);
            break;
        case 4:
            resultado=Restar(x,y,flag,flag2);//Envio los flags para comprobar el ingreso de variables
            printf("\nEl resultado de la Resta es: %.2f",resultado);
            break;
        case 5:
            resultado=Dividir(x,y,flag,flag2);//Envio los flags para comprobar el ingreso de variables
            printf("\nEl resultado de la Divicion es: %.2f",resultado);
            break;
        case 6:
            resultado=Multiplicar(x,y,flag,flag2);//Envio los flags para comprobar el ingreso de variables
            printf("\nEl resultado de la Multiplicacion es: %.2f",resultado);
            break;
        case 7:
            resultado=Factorial(x,flag);//Envio solo la primer variable con su respectivo flag ya que la operacion se realiza unicamente con la primer variable
            printf("\nEl resultado de Factorial es: %.2f",resultado);
            break;
        case 8:
            resultado=Sumar(x,y,flag,flag2);
            printf("\nEl resultado de la Suma es: %.2f",resultado);
            printf("\n");
            resultado=Restar(x,y,flag,flag2);
            printf("\nEl resultado de la Resta es: %.2f",resultado);
            printf("\n");
            resultado=Dividir(x,y,flag,flag2);
            printf("\nEl resultado de la Divicion es: %.2f",resultado);
            printf("\n");
            resultado=Multiplicar(x,y,flag,flag2);
            printf("\nEl resultado de la Multiplicacion es: %.2f",resultado);
            printf("\n");
            resultado=Factorial(x,flag);
            printf("\nEl resultado de Factorial es: %.2f",resultado);
            printf("\n");
            break;
        default:
            break;

        }
        rta=VolverMenu();//se consulta si se desea volver a utilizar la aplicacion.
     }while(rta=='s');
     system("cls");
     printf("\n");
     printf("\nThanks you for choosing us. Have a nice day!");
     printf("\n \n");
    return 0;
}
