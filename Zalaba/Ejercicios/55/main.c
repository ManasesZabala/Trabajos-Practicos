#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct DatosAlumnos
{
    int legajo;
    float promedio;
};
typedef struct DatosAlumnos Alumnos;

int main()
{
    Alumnos E_Alumnos[5000];
    int contAprobados=0;
    int contDiciembre=0;
    int contMarzo=0;
    char rta;
    int i=0;
    int flag=0;
    float promedioMax;
    int legajoMaxPromedio;
    do
    {
        system("cls");
        printf("\nIngrese numero de legajo del alumno: ");
        scanf("%d",&E_Alumnos[i].legajo);
        printf("\nIngrese promedio del alumno: ");
        scanf("%f",&E_Alumnos[i].promedio);

        if(flag==0 || E_Alumnos[i].promedio>promedioMax)
        {
            flag=1;
            promedioMax=E_Alumnos[i].promedio;
            legajoMaxPromedio=E_Alumnos[i].legajo;
        }

        if(E_Alumnos[i].promedio>=7)
        {
            contAprobados++;
        }
        if(E_Alumnos[i].promedio>=4 && E_Alumnos[i].promedio<7)
        {
            contDiciembre++;
        }
        if(E_Alumnos[i].promedio>4)
        {
            contMarzo++;
        }

        i++;
        printf("\nDesea seguir utilizando la aplicacion? (S/N): ");
        rta=tolower(getche());

        while(rta!='s' && rta!='n')
        {
            system("cls");
            printf("\nError, respuesta ingresada no valida. Por favor reingrese.");
            printf("\nDesea seguir utilizando la aplicacion? (S/N): ");
            rta=tolower(getche());
        }

    }while(rta=='s');
    printf("\nEl mejor promedio fue: \n Legajo:%d \n Promedio: %.2f",legajoMaxPromedio,promedioMax);
    printf("\nLa cantidad de alumnos aprobados es de: %d",contAprobados);
    printf("\nLa cantidad de alumnos que rinden en Diciembre es de: %d",contDiciembre);
    printf("\nLa cantidad de alumnos que rinden en Marzo es de: %d",contMarzo);
    return 0;
}
