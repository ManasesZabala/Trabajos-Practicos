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
    float salario;

};
typedef struct Empleados E_Empleados;

int main()
{
    E_Empleados Empleados[5000];
    int j;
    int flagMax=0;
    int flagMin=0;
    char nombreMax[50];
    char apellidoMax[50];
    char nombreMin[50];
    char apellidoMin[50];
    int legajoMax;
    int legajoMin;
    float salarioMax;
    float salarioMin;

    int i=0;
    int cont=1;
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
            Empleados[i].salario=Empleados[i].tarifa*Empleados[i].horasTrabajadas;

            if(flagMax==0 || Empleados[i].salario>salarioMax)
            {
                flagMax=1;
                strcpy(nombreMax,Empleados[i].nombre);
                strcpy(apellidoMax,Empleados[i].apellido);
                salarioMax=Empleados[i].salario;
                legajoMax=Empleados[i].legajo;

            }
            if(flagMin==0 || Empleados[i].salario<salarioMin)
            {
                flagMin=1;
                strcpy(nombreMin,Empleados[i].nombre);
                strcpy(apellidoMin,Empleados[i].apellido);
                salarioMin=Empleados[i].salario;
                legajoMin=Empleados[i].legajo;

            }


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

        printf("\n La cantidad de empleados ingresados fue: %d",i);
        printf("\n");
        printf("\nEl empleado con mayor salario es:");
        printf("\nNombre: %s", nombreMax);
        printf("\nApellido: %s",apellidoMax);
        printf("\nLegajo: %d",legajoMax);
        printf("\nSalario: %.2f",salarioMax);
        printf("\n");

        printf("\n");
        printf("\nEl empleado con menor salario es:");
        printf("\nNombre: %s", nombreMin);
        printf("\nApellido: %s",apellidoMin);
        printf("\nLegajo: %d",legajoMin);
        printf("\nSalario: %.2f",salarioMin);
        printf("\n");

        for(j=0;j<i;j++)
        {
            printf("\nEmpleado numero: %d / %d",cont,i);
            printf("\n Nombre: %s ",Empleados[j].nombre);
            printf("\n Apellido: %s ",Empleados[j].apellido);
            printf("\n Legajo: %d ",Empleados[j].legajo);
            printf("\n Horas Trabajadas: %.2f ",Empleados[j].horasTrabajadas);
            printf("\n Tarifa por hora: %.2f ",Empleados[j].tarifa);
            printf("\n Salario: %.2f ",Empleados[j].salario);
            cont++;
            printf("\n");
            printf("\n");



        }

        return 0;
}
