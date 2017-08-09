#include <stdio.h>
#include <stdlib.h>
/*
32. En una empresa se carga por teclado los siguientes datos: nombre del empleado, nacionalidad (A argentino,
E -extranjero), estudios cursados (1- primaria, 2 - secundario, 3 - universitario) y antigüedad. Se pide emitir
un listado con aquellos empleados que sean extranjeros, tengan estudios universitarios y tengan una
antigüedad igual o mayor a 20 años y por último indicar cuantos son y qué porcentaje son respecto del total
de empleados de la empresa
*/
struct Empleado
{
    char nombre[50];
    char nacionalidad;
    int estudios;
    int antiguedad;

};

int main()
{
    int i;
    int rango;
    int cont=1;
    int cont2=0;
    struct Empleado E_empleados[500];
    printf("\nIngrese cantidad de empleados a cargar: ");
    scanf("%d",&rango);

    for(i=0;i<rango;i++)
    {
    system("cls");
    printf("%d/%d",cont,rango);
    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(E_empleados[i].nombre);
    printf("\nIngrese nacionalidad (A-Argentino / E-Extranjero): ");
    fflush(stdin);
    scanf("%c",&E_empleados[i].nacionalidad);
    printf("\nIngrese Estudios cursados (1-primaria / 2-secundaria / 3-universitario): ");
    scanf("%d",&E_empleados[i].estudios);
    printf("\nIngrese antiguedad: ");
    scanf("%d",&E_empleados[i].antiguedad);
    cont++;
    }
    for(i=0;i<rango;i++)
    {
        if(E_empleados[i].nacionalidad=='e'  && E_empleados[i].antiguedad>=20)
        {

            printf("\nNombre:%s",E_empleados[i].nombre);
            printf("\nNacionalidad:%c",E_empleados[i].nacionalidad);
            printf("\nEstudios:%d",E_empleados[i].estudios);
            printf("\nAntiguedad:%d",E_empleados[i].antiguedad);
            cont2++;
        }

    }
    printf("\nLa cantidad de usuarios extranjeros con antiguedad igual o mayor a 20 anos son: %d",cont2);
    printf("\nel porcentaje  de usuarios extranjeros con antiguedad igual o mayor a 20 anos son: %d porciento",(cont2*100)/rango);


    /*
    for(i=0;i<rango;i++)
    {
        printf("\nNombre:%s",E_empleados[i].nombre);
        printf("\nNacionalidad:%c",E_empleados[i].nacionalidad);
        printf("\nEstudios:%d",E_empleados[i].estudios);
        printf("\nAntiguedad:%d",E_empleados[i].antiguedad);
    }
    */
}
