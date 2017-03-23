#include <stdio.h>
#include <stdlib.h>
/*
20.
 Hacer el programa que imprima todos los números naturales que hay desde la unidad hasta un número que
introducimos por teclado
*/

main()
{
	int i,num;
	char rta;
	do
	{
		system("cls");
		printf("\nIngrese numero: ");
		scanf("%d",&num);
		while(num<=0)
		{
			system("cls");
			printf("\nError numero ingresado no valido.\n Reingrese numero mayor a 0: ");
			scanf("%d",&num);
		}
		printf("Los numero naturales entre 1 y %d son:",num);
		for(i=1;i<num;i++)
		{
			printf("\n%d",i);
		}
		
		printf("\nDesea seguir usando esta aplicacion? (S/N): ");
		rta=tolower(getche());
		while(rta!='s' && rta!='n')
		{
			printf("\nError respuesta distinta de S y N. Desea seguir usando esta aplicacion?(S/N): ");
			rta=tolower(getche());
		}
	}while(rta=='s');
	
	
}
