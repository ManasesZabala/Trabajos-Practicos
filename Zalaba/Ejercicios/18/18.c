#include <stdio.h>
#include <stdlib.h>
#define MAX 10

/*
18. Diseñar en un programa que permita ingresar 10 números, ninguno de ellos igual a cero. Se pide sumar los
positivos, obtener el producto de los negativos y luego mostrar ambos resultados
*/
main()
{
	float i,num,contpos=0,contneg=1;
	int cont=1;
	char rta;
	do
	{	
		cont=1;
		system("cls");
		for(i=0;i<MAX;i++)
		{
			printf("\nIngrese numero %d/%d: ",cont,MAX);
			scanf("%f",&num);
			while(num==0)
			{
			printf("\nError el numero ingresado es igual a 0.\n Reingrese numero %d/%d: ",cont,MAX);
			scanf("%f",&num);
			}
			cont++;
			
			if(num>0)
			{
				contpos=contpos+num;
			}
			if(num<0)
			{
				contneg=contneg*num;
			}
		}
		printf("\nSuma de positivos: %.2f",contpos);
		printf("\nProducto de negativos: %.2f",contneg);
		printf("\nDesea seguir usando esta aplicacion? (S/N): ");
		rta=tolower(getche());
		while(rta!='s' && rta!='n')
		{
			printf("\nError respuesta distinta de S y N. Desea seguir usando esta aplicacion?(S/N): ");
			rta=tolower(getche());
		}
	}while(rta=='s');
}
