#include <stdio.h>
#define MAX 100
/*
11. Hacer el programa que imprima los números pares entre el 1 y el 100

*/
main()
{
	int i,resto;
	for(i=0;i<=MAX;i++)
	{
		resto=i%2;
		if(resto==0)
		{
			printf("\n%d",i);
		}	
	}
}
