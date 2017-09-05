#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float colectivos[3][12];
    float total=0;
    float totalLinea=0;
    float totalColectivo=0;
    float aux;
    int linea;
    int contLinea=1;
    int contColectivo=1;
    int numero;
    char rta;

    for(linea=0;linea<2;linea++)
        {
            for(numero=0;numero<12;numero++)
            {
                colectivos[linea][numero]=0;
            }
        }

    do
    {
        system("cls");
        printf("\nIngrese linea de colectivo: ");
        scanf("%d",&linea);
        printf("\nIngrese numero de colectivo: ");
        scanf("%d",&numero);
        while(linea>2 || numero>12)
        {
            system("cls");
            printf("\nError, numero ingresado no valido.Hay 3 lineas(0-1-2) con 12 unidades de tramporte. Reingrese.");
            printf("\nIngrese linea de colectivo: ");
            scanf("%d",&linea);
            printf("\nIngrese numero de colectivo: ");
            scanf("%d",&numero);
        }
        printf("\nIngrese monto: ");
        scanf("%f",&aux);
        colectivos[linea][numero]=colectivos[linea][numero]+aux;
        total=total+aux;

        printf("\nDesea seguir utilizando la aplicacion (S/N): ");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            printf("\nError, respuesta ingresada no valida, reingrese.");
            printf("\nDesea seguir utilizando la aplicacion (S/N): ");
            rta=tolower(getche());
        }
    }while(rta=='s');
    system("cls");

    printf("\nRecaudacion total: %.2f",total);
    printf("\n");
    printf("\nRecaudacion individual de cada colectivo ");
    for(linea=0;linea<2;linea++)//Muestra recaudacion por colectivo
    {
        for(numero=0;numero<12;numero++)
        {
            printf("\n");
            printf("\nLinea: %d\t Colectivo: %d\tRecaudacion: %.2f",linea,numero,colectivos[linea][numero]);

        }
        printf("\n------------------------------");
    }

     for(linea=0;linea<2;linea++)
    {
        aux=0;
        for(numero=0;numero<12;numero++)
        {
            aux=colectivos[linea][numero]+aux;

        }
        printf("\nRecaudacion total de la linea %d: %.2f",linea,aux);

    }

    return 0;
}
