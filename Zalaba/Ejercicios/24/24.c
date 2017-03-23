#include <stdio.h>
#include <stdlib.h>
/*
24. Diseñar en un programa que permita registrar de los empleados de una fábrica (no se sabe cuántos) su peso
y saber cuántos pesan hasta 80 kg. inclusive y cuantos pesan más de 80 kg.
*/

main()
{
	int i,cont=1,contmax=0,contmin=0;
	float peso;
	char rta;
	do
	{
		system("cls");
		cont++;
		printf("\nIngrese peso del empleado: ");
		scanf("%f",&peso);
		if(peso>=80)
		{
			contmax++;
		}
		else
		{
			contmin++;
		}
		printf("\nDesea seguir usando esta aplicacion? (S/N): ");
		rta=tolower(getche());
		while(rta!='s' && rta!='n')
		{
			printf("\nError respuesta distinta de S y N. Desea seguir usando esta aplicacion?(S/N): ");
			rta=tolower(getche());
		}
	}while(rta=='s');
	printf("\nLa cantidad de empleados con un peso mayor a 80kg son: %d",contmax);
	printf("\nLa cantidad de empleados con un peso menor a 80kg son: %d",contmin);
		
	
}
