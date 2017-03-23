#include <stdio.h>
#include <stdlib.h>
#define MAX 5
/*
9. Escribir un programa que realice lea por teclado 20 caracteres. Luego de la lectura indicar cuantas "a" se
ingresaron, cuantas "e, i, o, u"

*/

main()
{
	int i,conta=0,conte=0,conti=0,conto=0,contu=0;
	char letra;
	
	for(i=0;i<MAX;i++)
	{
		printf("\n Ingrese letra: ");
		letra=tolower(getche());
		if(letra=='a')
		{
			conta++;
		}
		if(letra=='e')
		{
			conte++;
		}
		if(letra=='i')
		{
			conti++;
		}
		if(letra=='o')
		{
			conto++;
		}
		if(letra=='u')
		{
			contu++;
		}
	}
	printf("\nLa cantidad de A ingresadas son: %d",conta);
	printf("\nLa cantidad de E ingresadas son: %d",conte);
	printf("\nLa cantidad de I ingresadas son: %d",conti);
	printf("\nLa cantidad de O ingresadas son: %d",conto);
	printf("\nLa cantidad de U ingresadas son: %d",contu);
}
