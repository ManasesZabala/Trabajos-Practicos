#include<stdio.h>
#include<stdlib.h>

/*
16. Hacer el programa que nos permita introducir un número por teclado y nos informe si es positivo o
negativo
*/
main()
{
	float num;
	char rta;
	do
	{
		system("cls");
		
		printf("\nIngrese un numero: ");
		scanf("%f",&num);
		if(num>0)
		{
			printf("\nEl numero es positivo.");
		}
		else
		{
			printf("\nEl numero es negativo.");
		}
		printf("\nDesea volver a ingresar numero(S/N): ");
		rta=tolower(getche());
		while(rta!='s' && rta!='n')
		{
		printf("\nError Respuesta distinta de S o N.\nDesea volver a ingresar numero(S/N): ");
		rta=tolower(getche());	
		}
	}while(rta=='s');
}
