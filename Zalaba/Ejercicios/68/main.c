#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 50
struct Mesa
{
    int numero;
    float valor;
    int flag;
};
typedef struct Mesa Mesas;
int main()
{
    int i;
    Mesas E_Mesas[MAX];
    int numeroMesa;
    char rta;
    float sumaTotal;

    for(i=0;i<MAX;i++)//Carga los numeros de las mesas.
        {
            E_Mesas[i].numero=i;
            E_Mesas[i].flag=0;
        }

    do
    {
        system("cls");
        printf("\nIngrese numero de mesa (0/49): ");
        scanf("%d",&numeroMesa);
        while(numeroMesa<0 || numeroMesa>49)
        {
            system("cls");
            printf("\nError, respuesta ingresada invalida. Por favor reingrese.");
            printf("\nIngrese numero de mesa (0/%d): ",MAX);
            scanf("%d",&numeroMesa);
        }











     system("cls");
     printf("\nDesea seguir utilizando la aplicacion? (S/N): ");
     rta=tolower(getche());
     while(rta!='s' && rta!='n')
     {
         system("cls");
         printf("\nError. respuesta ingresada no valida. Por favor reingrese.");
         printf("\nDesea seguir utilizando la aplicacion? (S/N): ");
        rta=tolower(getche());
     }

    }while(rta=='s');
}
