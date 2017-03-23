#include <stdio.h>
#include <stdlib.h>
/*
19. Ingresar un número entero por consola y efectuar la suma de todos los números que le anteceden,
comenzando desde 0 y mostrar el resultado por pantalla

*/
main()
{
	int num,i,suma,cont=0;
	char rta;
	do
	{
		system("cls");
		cont=0;
		printf("\nIngrese numero: ");
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			cont=cont+i;
		}
		printf("\nLa suma de todos los numeros que antedecen a %d es: %d",num,cont);
		
		printf("\nDesea seguir usando esta aplicacion? (S/N): ");
		rta=tolower(getche());
		while(rta!='s' && rta!='n')
		{
			printf("\nError respuesta distinta de S y N. Desea seguir usando esta aplicacion?(S/N): ");
			rta=tolower(getche());
		}
	}while(rta=='s');
	
}
