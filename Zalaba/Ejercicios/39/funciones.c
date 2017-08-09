 #include<stdio.h>
 #include<stdlib.h>
 #include "funciones.h"

 BuscarMaximo()
 {
    float numeros[4];
    int i;
    float max;
    int flag=1;
    int cont=1;
    for(i=0;i<4;i++)
    {
        system("cls");
        printf("\nIngrese valor del numero %d/4: ",cont);
        scanf("%f",&numeros[i]);
        cont++;
    }
    for(i=0;i<4;i++)
    {
        if(flag==1 || numeros[i]>max)
        {
            flag=0;
            max=numeros[i];
        }
    }
    printf("\nEl numero maximo es: %.2f",max);
 }


