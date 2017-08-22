#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 3
struct DatosEmpleados
{
    int edad;
    char sexo;
    int legajo;
};
typedef struct DatosEmpleados Datos;

int main()
{
    Datos E_Empleados[MAX];
    int sumaEdad;
    int flag=0;
    int i;
    int cont=1;
    int contMujeres=0;
    int maxEdad;
    int legajoEdad;
    int EdadPromedio;
    char sexoMayor;

    int ano;
    printf("\nIngrese ano en el que se encuenta (ej: 2017): ");
    scanf("%d",&ano);

    for(i=0;i<MAX;i++)
    {
        printf("\n%d/%d",cont,MAX);
        printf("\nIngrese edad: ");
        scanf("%d",&E_Empleados[i].edad);
        printf("\nIngrese sexo (M/F): ");
        fflush(stdin);
        scanf("%c",&E_Empleados[i].sexo);
        printf("\nIngrese legajo: ");
        scanf("%d",&E_Empleados[i].legajo);
        sumaEdad=sumaEdad+E_Empleados[i].edad;
         if(flag==0 || E_Empleados[i].edad>maxEdad)
        {
            flag=1;
            maxEdad=E_Empleados[i].edad;
            legajoEdad=E_Empleados[i].legajo;
            sexoMayor=E_Empleados[i].sexo;
        }
        if(E_Empleados[i].sexo=='F' && ano-E_Empleados[i].edad==1978)
        {
            contMujeres++;
        }
        cont++;
    }
    EdadPromedio=sumaEdad/MAX;
    printf("\nCantidad de mujeres que nacieron en 1978: %d",contMujeres);
    printf("\nEl promedio de edad fue de: %d",EdadPromedio);
    printf("\nSexo y legajo de la persona con mayor edad: \n Sexo: %c \nLegajo: %d",sexoMayor,legajoEdad);
    return 0;
}
