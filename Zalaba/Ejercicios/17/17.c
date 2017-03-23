#include <stdio.h>
#include <stdlib.h>

/*
17. Hacer el programa que nos permita introducir un número por teclado y nos informe si es par o impar
*/
main()
{
	int num,resultado;
	char rta;
	do
	{
		system("cls");
		
		printf("\nIngrese un numero: ");
		scanf("%d",&num);
		resultado=num%2;
		if(resultado!=0)
		{
			printf("\nEl numero es impar.");
		}
		if(resultado==0)
		{
			printf("\nEl numero es par.");
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
