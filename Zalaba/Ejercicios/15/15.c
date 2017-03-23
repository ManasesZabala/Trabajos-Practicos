#include<stdlib.h>
#include<stdio.h>
#define MAX 100

/*
15. Escribir en y codificar en C un programa que muestre los múltiplos de 6 comprendidos entre 0 y 100
*/

main()
{
	int i,resto;
	for(i=1;i<=MAX;i++)
	{
		resto=i%6;
		if(resto==0)
		{
			printf("\n%d",i);
		}
	}	
}
