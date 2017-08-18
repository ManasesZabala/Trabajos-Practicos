#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 3
struct Empleados
{
    int legajo;
    int edad;
    float salario;
};
typedef struct Empleados E_Empleados;

int main()
{
    E_Empleados Empleados[MAX];
    int cont=1;
    int promedio;
    int i;
    int sumaEdad=0;
    for(i=0;i<MAX;i++)
    {
        system("cls");
        printf("\n%d/%d",cont,MAX);
        printf("\n Ingrese legajo: ");
        scanf("%d",&Empleados[i].legajo);
        printf("\n Ingrese edad: ");
        scanf("%d",&Empleados[i].edad);
        printf("\nIngrese salario: ");
        scanf("%f",&Empleados[i].salario);
        cont++;

        sumaEdad=sumaEdad+Empleados[i].edad;
    }
    promedio=sumaEdad/MAX;
    system("cls");
    printf("\nPromedio de edad: %d",promedio);
    for(i=0;i<MAX;i++)
    {
        if(Empleados[i].edad>promedio)
        {
            printf("\nEl empleado supera el promedio de edad.");
            printf("\nEdad: %d\nLegajo: %d",Empleados[i].edad,Empleados[i].legajo);
        }

    }



}
