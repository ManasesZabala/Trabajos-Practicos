#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main()
{

    int i;
    int j;
    int cantidad[MAX];
    float precio[MAX];
    int codigo[MAX];
    int aux;
    int codigoMin;
    int min;
    int flag=0;
    float auxFloat;
    int cont=1;
    for(i=0;i<MAX;i++)
    {
        system("cls");
        printf("\n%d/%d",cont,MAX);
        printf("\nIngrese codigo de producto: ");
        scanf("%d",&codigo[i]);
        printf("\nIngrese precio del producto: ");
        scanf("%f",&precio[i]);
        printf("\nIngrese cantidad de productos: ");
        scanf("%d",&cantidad[i]);
        if(flag==0 || precio[i]<min)
        {
            flag=1;
            min=precio[i];
            codigoMin=codigo[i];
        }
        cont++;
    }
    system("cls");
    printf("\nCodigo del producto de menor precio: %d",codigoMin);

    for(i=0;i<MAX-1;i++)
    {
        for(j=i+1;j<MAX;j++)
        {
            if(codigo[i]>codigo[j])
            {
                aux=codigo[i];
                codigo[i]=codigo[j];
                codigo[j]=aux;

                aux=cantidad[i];
                cantidad[i]=cantidad[j];
                cantidad[j]=aux;

                auxFloat=precio[i];
                precio[i]=precio[j];
                precio[j]=auxFloat;
            }
        }
    }
    printf("\n");
    cont=1;
    for(i=0;i<MAX;i++)
    {
        printf("\n%d / %d",cont,MAX);
        printf("\nCodigo: %d",codigo[i]);
        printf("\nPrecio: %.2f",precio[i]);
        printf("\nCantidad: %d",cantidad[i]);
        cont++;
    }
    return 0;
}
