#include <stdio.h>
#include <stdlib.h>

int main()
{
    int legajo;
    int sexo;
    float sueldo;
    char rta;
    int cont1=0;
    int cont2=0;

    do
    {
        system("cls");

        printf("Ingrese numero de legajo:");
        scanf("%d",&legajo);

        printf("\nIngrese sexo(1-Masculino / 2-Femenino): ");
        scanf("%d",&sexo);
        while(sexo!=1 && sexo!=2)
        {
            system("cls");
            printf("\nError numero de sexo ingresado invalido. Reingrese.");
            printf("\nIngrese sexo(1-Masculino / 2-Femenino): ");
            scanf("%d",&sexo);
        }

        printf("\nIngrese sueldo: ");
        scanf("%f",&sueldo);
        if(sexo==1 && sueldo<400)
        {
            cont1++;

        }
        if(sexo==2 && sueldo>500)
        {
            cont2++;

        }


        printf("\nDesea volver a utilizar el programa(S/N): ");
        fflush(stdin);
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            system("cls");
            printf("\nError opcion ingresada no valida. Reingrese.");
            printf("\nDesea volver a utilizar el programa(S/N): ");
            fflush(stdin);
            rta=tolower(getche());
        }
    }while(rta=='s');

    printf("\n Cantidad de empleados masculinos que ganan menos de $400: %d",cont1);
    printf("\n Cantidad de empleados femeninos que ganan mas de $500: %d",cont2);

}
