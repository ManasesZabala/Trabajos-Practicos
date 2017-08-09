#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moso;
    int cont1=0;
    int cont2=0;
    float num;
    float facturaMoso1=0;
    float facturaMoso2=0;
    do
    {
        system("cls");
       printf("\nIngrese su numero: ");
        scanf("%d",&moso);
            while(moso!= 1 && moso !=2 && moso!=0)
            {
                system("cls");
                printf("\nError, opcion no valida. Por favor reingrese.");
                printf("\nIngrese su numero: ");
                scanf("%d",&moso);
            }


            if(moso==1)
            {
                system("cls");
                cont1++;
                printf("\n Moso numero 1.Ingrese cantidad facturada: ");
                scanf("%f",&num);
                facturaMoso1=facturaMoso1+num;
            }
            if(moso==2)
            {
                system("cls");
                cont2++;
                printf("\n Moso numero 2.Ingrese cantidad facturada: ");
                scanf("%f",&num);
                facturaMoso2=facturaMoso2+num;
            }

    }while(moso==1 || moso==2);

    if(cont1>cont2)
    {
        system("cls");
        printf("\n El moso con mayor ventas fue el moso numero 1.Con %d clientes atendidos",cont1);
        printf("\nCon una facturacion total de: %.2f",facturaMoso1);
        printf("\n Y un adicional de %.2f",facturaMoso1*0.13);
        printf("\n Total a cobrar: %.2f",facturaMoso1*1.13);
    }
    if(cont2>cont1)
    {
        system("cls");
        printf("\n El moso con mayor ventas fue el moso numero 2. Con %d clientes atendidos",cont2);
        printf("\nCon una facturacion total de: %.2f",facturaMoso2);
        printf("\n Y un adicional de %.2f",facturaMoso2*0.13);
        printf("\n Total a cobrar: %.2f",facturaMoso2*1.13);
    }

}
