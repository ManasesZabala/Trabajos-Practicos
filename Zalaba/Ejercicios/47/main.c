#include <stdio.h>
#include <stdlib.h>
struct Datos
{
    char apellido[500];
    char nombre[500];
    int inteligencia;
    int cultura;
    int belleza;
    int suma;
};

typedef struct Datos E_Datos;

int main()
{
    E_Datos Participantes[20];
    char NombreMax[50];
    char ApellidoMax[50];
    int promedio;
    int flagMax=0;
    int promMax;
    int i;
    int cont=1;
    char rta;
    int j;
    int max=3
    ;
    for(i=0;i<max;i++)
    {

        Participantes[i].suma=0;
        system("cls");
        printf("%d / %d",cont,max);
        printf("\nIngrese nombre de la participante: ");
        fflush(stdin);
        scanf("%s",Participantes[i].nombre);
        printf("\nIngrese apellido de la participante: ");
        fflush(stdin);
        scanf("%s",Participantes[i].apellido);
        printf("\nIngrese puntos de Inteligencia: ");
        scanf("%d",&Participantes[i].inteligencia);
        printf("\nIngrese puntos de Cultura General: ");
        scanf("%d",&Participantes[i].cultura);
        printf("\nIngrese puntos de Belleza: ");
        scanf("%d",&Participantes[i].belleza);
        Participantes[i].suma=Participantes[i].suma+Participantes[i].inteligencia;
        Participantes[i].suma=Participantes[i].suma+Participantes[i].cultura;
        Participantes[i].suma=Participantes[i].suma+Participantes[i].belleza;
        promedio=Participantes[i].suma/3;

        if(flagMax==0 || promedio>promMax)
        {
            strcpy(NombreMax,Participantes[i].nombre);
            strcpy(ApellidoMax,Participantes[i].apellido);
            flagMax=1;
            promMax=promedio;
        }
        cont++;
    }




    printf("\n Nombre y Apellido de la concursante con mayor puntaje: %s %s con un total de %d",NombreMax,ApellidoMax,promMax);
    printf("\n");

    for(j=0;j<i;j++)
    {
        printf("Nombre: %s || ",Participantes[j].nombre);
        printf("Apellido: %s|| ",Participantes[j].apellido);
        printf("Cultura: %d || ",Participantes[j].cultura);
        printf("Inteligencia: %d ||",Participantes[j].inteligencia);
        printf("Belleza: %d || ",Participantes[j].belleza);
        printf("\n");
    }

    return 0;
}
