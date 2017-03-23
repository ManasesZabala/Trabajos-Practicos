#include <stdio.h>
#include <stdlib.h>
/*
22. Diseñar el programa necesario para que habiéndose leído el valor de 2 variables NUM1 y NUM2 se
intercambien los valores de las variables, es decir que el valor que tenía NUM1 ahora lo contenga NUM2 y
viceversa

*/

main()
{
	float num1,num2,aux;
	char rta;
	do
	{
		system("cls");
		
		printf("\nIngrese valor del numero 1: ");
		scanf("%f",&num1);
		printf("\nIngrese valor del numero 2: ");
		scanf("%f",&num2);
		
		aux=num1;
		num1=num2;
		num2=aux;
		printf("\nEl numero 1 ahora vale: %.2f",num1);
		printf("\nEl numero 2 ahora vale: %.2f",num2);
		
		printf("\nDesea seguir usando esta aplicacion? (S/N): ");
		rta=tolower(getche());
		while(rta!='s' && rta!='n')
		{
			printf("\nError respuesta distinta de S y N. Desea seguir usando esta aplicacion?(S/N): ");
			rta=tolower(getche());
		}
	}while(rta=='s');
	
	
}
