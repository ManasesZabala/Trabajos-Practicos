#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"
// -----------------------------------------------------------//
/* 1 */
int Menu()
{
    char rta[50];//Declaro como char, por si el usuario en lugar de ingresar un numero, ingresa una o mas letras por error.
    printf("\nIngrese una opcion del menu: ");
    printf("\n1- Ingresar 1er operando(A=x): ");
    printf("\n2- Ingresar 2do operando(B=y): ");
    printf("\n3- Calcular la Suma(A+B).");
    printf("\n4- Calcular la Resta(A-B).");
    printf("\n5- Calcular la Division(A/B).");
    printf("\n6- Calcular la Multiplicacion(A*B).");
    printf("\n7- Calcular el Factorial(!A).");
    printf("\n8- Calcular todas las operaciones.");
    printf("\n9- Salir");
    printf("\n");
    printf("\nSu opcion: ");
    scanf("%s",rta);
    while(atoi(rta)>9 || atoi(rta)<1)
    {
        system("cls");
        printf("\nError, respuesta no valida. Por favor reingrese.");
        printf("\nIngrese una opcion del menu: ");
        printf("\n1- Ingresar 1er operando(A=x): ");
        printf("\n2- Ingresar 2do operando(B=y): ");
        printf("\n3- Calcular la Suma(A+B).");
        printf("\n4- Calcular la Resta(A-B).");
        printf("\n5- Calcular la Division(A/B).");
        printf("\n6- Calcular la Multiplicacion(A*B).");
        printf("\n7- Calcular el Factorial(!A).");
        printf("\n8- Calcular todas las operaciones.");
        printf("\n9- Salir");
        printf("\n");
        printf("\nSu opcion: ");
        scanf("%s",rta);
    }
    return atoi(rta);


}
// -----------------------------------------------------------------------------//
/* 2 */
char VolverMenu()
{
    char rta;
        printf("\nDesea volver a utilizar la aplicacion (S/N)?");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')//Me aseguro que el usuario ingrese una de las 2 opciones validas para evitar errores.
        {
            system("cls");
            printf("\nError, respuesta ingresada no valida. Reingrese.");
            printf("\nDesea volver a utilizar la aplicacion (S/N)?");
            rta=tolower(getche());
        }

    return rta;
}


// -----------------------------------------------------------------------------//
/* 3 */
float TomarNum1()
{
    float num;
    printf("\nIngrese Primer operando A: ");
    scanf("%f",&num);
    return num;

}

// -----------------------------------------------------------------------------//
/* 4 */
float TomarNum2()
{
    float num;
    printf("\nIngrese Segundo operando B: ");
    scanf("%f",&num);
    return num;

}
// -----------------------------------------------------------------------------//

/* 5 */
float Sumar(float num1,float num2, int flag, int flag2)
{
    float resultado=0;
    if(flag==0 || flag2==0)
    {
        printf("\nError, numeros no ingresados.");
    }
    else
    {
        resultado=num1+num2;
    }
    return resultado;
}

// -----------------------------------------------------------------------------//

/* 6 */
float Restar(float num1,float num2, int flag, int flag2)
{
    float resultado=0;
    if(flag==0 || flag2==0)
    {
        printf("\nError, numeros no ingresados.");
    }
    else
    {
        resultado=num1-num2;
    }
    return resultado;
}
// -----------------------------------------------------------------------------//

/* 7 */
float Dividir(float num1,float num2, int flag, int flag2)
{
    float resultado=0;

    if(flag==0 || flag2==0)
    {
        printf("\nError, numeros no ingresados.");
    }
    if(num2==0)//Confirmo si el segundo numero es cero, en el caso de serlo, informo que no es posible dividir por cero.
    {
        printf("\nError, no es posible dividir por 0 cero.");
    }
    else
    {
            resultado=num1/num2;
    }


    return resultado;
}

// -----------------------------------------------------------------------------//

/* 8 */
float Multiplicar(float num1,float num2, int flag, int flag2)
{
    float resultado=0;
    if(flag==0 || flag2==0)
    {
        printf("\nError, numeros no ingresados.");
    }
    else
    {
        resultado=num1*num2;
    }
    return resultado;
}

// -----------------------------------------------------------------------------//
/* 9 */
float Factorial(float num1, int flag)
{
    float resultado=1;
    int i;
    if(flag==0)
    {
        printf("\nError, numeros no ingresados.");
    }
    else
    {
        for(i=1;i<=num1;i++)
        {
            resultado=resultado*i;
        }
    }
    return resultado;
}

// -----------------------------------------------------------------------------//
