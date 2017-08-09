#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct Datos
{
    int numSocio;
    int edad;
    int deporte;
    char nombre[50];
    char apellido[50];


};
typedef struct Datos E_Datos;

int main()
{
    E_Datos Datos[5000];
    int sumaEdad=0;
    char rta;
    int i=0;
    int contTenis=0;
    int contPaddle=0;
    do
    {
        system("cls");
        printf("\nIngrese nombre: ");
        scanf("%s",Datos[i].nombre);
        printf("\nIngrese apellido: ");
        scanf("%s",Datos[i].apellido);
        printf("\n Ingrese numero de socio: ");
        scanf("%d",&Datos[i].numSocio);
        printf("\n Ingrese edad: ");
        scanf("%d",&Datos[i].edad);
        sumaEdad=sumaEdad+Datos[i].edad;
        printf("\n Ingrese numero de deporte que practica (1-Tenis  / 2-Paddle)");
        scanf("%d",&Datos[i].deporte);
        while(Datos[i].deporte!= 1 && Datos[i].deporte!= 2)
        {
            system("cls");
            printf("\n Error, numero de deporte ingresado no valido. Reingrese.");
            printf("\n Ingrese numero de deporte que practica (1-Tenis  / 2-Paddle)");
            scanf("%d",&Datos[i].deporte);
        }

        if(Datos[i].deporte==1)
        {
            contTenis++;
        }
        if(Datos[i].deporte==2)
        {
            contPaddle++;
        }


        i++;
        printf("\n Desea volver a utilizar la aplicacion? (S/N): ");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            system("cls");
            printf("\nError, respues ingresada no valida. Reingrese.");
            printf("\n Desea volver a utilizar la aplicacion? (S/N): ");
            rta=tolower(getche());
        }

    }while(rta=='s');
    system("cls");
    printf("\nLa cantidad de personas que practican tenis es de: %d",contTenis);
    printf("\nLa cantidad de personas que practican paddle es de: %d",contPaddle);
    printf("\nEl promedio de edad de los deportistas es de: %d",sumaEdad/i);

    return 0;
}
