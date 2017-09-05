#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 3
struct Datos
{
    int legajo;
    float sueldoBasico;
    float bonificacion;
    float descuentoJubilacion;
    float descuentoObraSocial;
    float sueldoNeto;

};
int main()
{
    struct Datos E_Empleados[MAX];
    int i;
    int flag=0;
    int legajoAntiguedad;
    float descJubilacion;
    float descObra;
    float aux;
    float maxAntiguedad;


    for(i=0;i<MAX;i++)
    {
        E_Empleados[i].legajo=i;
    }

    for(i=0;i<MAX;i++)
    {
        printf("\n%d/%d",i,MAX);
        printf("\nIngrese sueldo: ");
        scanf("%f",&E_Empleados[i].sueldoBasico);
        printf("\nIngrese Bonificacion: ");
        scanf("%f",&E_Empleados[i].bonificacion);
        descJubilacion=E_Empleados[i].sueldoBasico*0.16;
        aux=E_Empleados[i].sueldoBasico*0.4;
        descObra=aux+E_Empleados[i].sueldoBasico*0.05;
        E_Empleados[i].descuentoJubilacion=descJubilacion;
        E_Empleados[i].descuentoObraSocial=descObra;
        E_Empleados[i].sueldoNeto=E_Empleados[i].sueldoBasico+E_Empleados[i].bonificacion-descJubilacion-descObra;
        if(flag==0 || E_Empleados[i].bonificacion>maxAntiguedad)
        {
            flag=1;
            maxAntiguedad=E_Empleados[i].bonificacion;
            legajoAntiguedad=E_Empleados[i].legajo;

        }

    }
    system("cls");
    printf("\nLegajo de Empleado con la mayor bonificacion: ");
    printf("\nLegajo: %d",legajoAntiguedad);
    printf("\nBonificacion: %.2f",maxAntiguedad);

    printf("\n");
    for(i=0;i<MAX;i++)
    {
        printf("\n");
        printf("\nNumero Legajo: %d\nSueldo Basico: %.2f\nJubilacion: %.2f\nObra Social %.2f\nAntiguedad: %.2f\nSueldo Neto: %.2f\n  ",E_Empleados[i].legajo,E_Empleados[i].sueldoBasico,E_Empleados[i].descuentoJubilacion,E_Empleados[i].descuentoObraSocial,E_Empleados[i].bonificacion,E_Empleados[i].sueldoNeto);
    }


    return 0;
}
