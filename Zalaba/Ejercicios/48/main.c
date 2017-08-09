#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct Empleados
{
    float tarifa;
    float horasTrabajadas;
    char nombre[50];
    char apellido[50];
    int legajo;

};
typedef struct Empleados E_Empleados;

int main()
{
    E_Empleados Empleados[5000];
    int j;
    float salario;
    int i=0;
    char rta;
        do
        {
            system("cls");
            printf("\n Ingrese Nombre: ");
            fflush(stdin);
            scanf("%s",Empleados[i].nombre);
            printf("\n Ingrese Apellido: ");
            fflush(stdin);
            scanf("%s",Empleados[i].apellido);
            printf("\n Ingrese Legajo: ");
            scanf("%d",&Empleados[i].legajo);
            printf("\nIngrese tarifa horaria: ");
            scanf("%f",&Empleados[i].tarifa);
            printf("\nIngrese cantidad de horas trabajadas: ");
            scanf("%f",&Empleados[i].horasTrabajadas);


            i++;
            printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
            rta=tolower(getche());
            while(rta!='s' && rta!='n')
            {
                system("cls");
                printf("\nError respues invalida.Por Favor reingrese.");
                printf("\nDesea volver a utilizar la aplicacion? (S/N): ");
                rta=tolower(getche());
            }
        }while(rta=='s');
        system("cls");
        for(j=0;j<i;j++)
        {

            printf("\n Nombre: %s ",Empleados[j].nombre);
            printf("\n Apellido: %s ",Empleados[j].apellido);
            printf("\n Legajo: %d ",Empleados[j].legajo);
            printf("\n Horas Trabajadas: %.2f ",Empleados[j].horasTrabajadas);
            printf("\n Tarifa por hora: %.2f ",Empleados[j].tarifa);
            salario=Empleados[j].tarifa*Empleados[j].horasTrabajadas;
            printf("\n Salario: %.2f ",salario);
            printf("\n");
            printf("\n");



        }

        return 0;
}
