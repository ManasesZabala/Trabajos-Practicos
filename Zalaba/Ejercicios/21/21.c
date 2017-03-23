#include <stdio.h>
#include <stdlib.h>

/*
21. Hacer el programa que nos permita contar los múltiplos de 3 desde la unidad hasta un número que
introducimos por teclado
*/
main()
{
	int i,num,resto;
	char rta;
	do
	{
		system("cls");
		
		//Empezar a escribir a partir de aqui:
		printf("\nIngrese numero: ");
		scanf("%d",&num);
		while(num<=0)
		{
			system("cls");
			printf("\nError numero ingresado no valido. Reingrese numero mayor a 0: ");
			scanf("%d",&num);
		}
		
		for(i=1;i<=num;i++)
		{
			resto=i%3;
			if(resto==0)
			{
				printf("\n%d",i);
			}
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
