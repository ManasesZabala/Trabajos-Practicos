#include <stdio.h>
#include <stdlib.h>
#define MAX 99
/*

14. Diseñar un programa que imprima y sume la serie de números 3,6,9,12,...,99

*/
main()
{
	int i,resto;
	
	for(i=0;i<=MAX;i++)
	{
		resto=i%3;
		if(resto==0)
		{
			printf("\n%d",i);
		}
	}
	
	
}
