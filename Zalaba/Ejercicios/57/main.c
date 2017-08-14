#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char rta;
    float kilometros;
    int minutos;
    int segundos;
    float promedio;
    do
    {
        system("cls");
        printf("\nIngrese cantidad de km recorridos: ");
        scanf("%f",&kilometros);
        printf("\nIngrese la cantidad de minutos: ");
        scanf("%d",&minutos);
        printf("\nIngrese cantidad de segundos: ");
        scanf("%d",&segundos);
        promedio=(1*minutos)/kilometros;
        printf("\nUsted recorrio %.2f kilometros en %d minutos y %d segundos. Su velocidad promedio fue de %.2f km/h",kilometros,minutos,segundos,promedio);

        printf("\nDesea volver a utilizar la aplicacion (S/N): ");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            system("cls");
            printf("\nError, respuesta no valida.Por favor reingrese.");
            printf("\nDesea volver a utilizar la aplicacion (S/N): ");
            rta=tolower(getche());
        }
    }while(rta=='s');
}
