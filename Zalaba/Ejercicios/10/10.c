#include <stdio.h>
#include <stdlib.h>
#define MAX 100
/*
10. 
Escribir en C un programa que muestre los números impares entre 0 y 100 
y que imprima cuantos impares hay
*/

main()
{
	int i,cont=0,resto;
	for(i=0;i<=100;i++)
	{
		resto=i%2;
		if(resto!=0)
		{
			printf("\n%d",i);
		}
	}
	
}
