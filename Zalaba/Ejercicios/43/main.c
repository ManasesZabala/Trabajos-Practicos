#include <stdio.h>
#include <stdlib.h>
struct Alumno
{
    char nombre[50];
    int nota[6];
    int suma;
};
typedef struct Alumno E_Alumno;

int main()
{
    E_Alumno Alumno[5000];
    char rta;
    int i=0;
    int j;
    int t;
    int promedio=0;
    int contNotas=1;

    do
    {
        Alumno[i].suma=0;
        system("cls");
        printf("\nIngrese nombre del alumno: ");
        fflush(stdin);
        scanf("%s",Alumno[i].nombre);
        for(j=0;j<6;j++)
        {
            printf("\nIngrese nota %d/6: ",contNotas);
            scanf("%d",Alumno[j].nota);
            Alumno[i].suma=Alumno[i].suma+(*Alumno[j].nota);
            contNotas++;
        }


        printf("\nDesea seguir utilizando la aplicacion (S/N)?: ");
        rta=tolower(getche());
        while(rta!='s' && rta!='n')
        {
            system("cls");
            printf("\nError, respuesta equivocada.Reingrese");
            printf("\nDesea seguir utilizando la aplicacion (S/N)?: ");
            rta=tolower(getche());
        }
        i++;
        contNotas=1;
    }while(rta=='s');

    for(t=0;t<i;t++)
    {
        promedio=Alumno[t].suma/6;
        printf("\n NOMBRE: %s\t PROMEDIO: %d",Alumno[t].nombre,promedio);
    }
    return 0;
}
