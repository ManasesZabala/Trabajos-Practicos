#include <stdio.h>
#include <stdlib.h>
char Menu()
{
    char menu;
    printf("\nIngrese una opcion del menu: ");
    printf("\n a- Ingresar un numero.");
    printf("\n b- Ingresar una posicion.");
    printf("\n");
    printf("\nOpcion: ");
    fflush(stdin);
    scanf("%c",&menu);
    while(menu!='a' && menu!='b')
    {
        printf("\nError, respuesta no valida. Por favor reingrese.");
        printf("\n");
        printf("\nOpcion: ");
        fflush(stdin);
        scanf("%c",&menu);
    }
    return menu;



}
//-------------------------------------------------------------------------------
void CargarVector(int vec[],int largo)
{
    int i;
    int cont=1;
    for(i=0;i<largo;i++)
    {
        system("cls");
        printf("\n%d/%d",cont,largo);
        printf("\nIngrese numero: ");
        scanf("%d",&vec[i]);
        cont++;
    }
}
//-------------------------------------------------------------------------------
void MuestroPosicion(int vec[],int largo)
{
    int numero;
    int i;
    int flag;
    printf("\nIngrese numero a buscar: ");
    scanf("%d",&numero);
    for(i=0;i<largo;i++)
    {
        if(vec[i]==numero)
        {
            flag==1;
            printf("\nEl numero fue encontrado en la posicion: %d",i);
        }
        else
        {
            system("cls");
            printf("\nNo se encontro dicho numero: %d. En el vector cargado",numero);
        }
    }
}
//-------------------------------------------------------------------------------
MuestoNumero(int vec[],int largo)
{
    int i;
    int posicion;
    printf("\nIngrese posicion: ");
    scanf("%d",&posicion);
     while(posicion>=largo || posicion<0)
    {
        printf("\nError. La posicion ingresada no existe. por favor reingrese un valor entre %d / %d: ",0,largo-1);
        scanf("%d",&posicion);
    }
    printf("El valor en la posicion %d es de: %d",posicion,vec[posicion]);

}
