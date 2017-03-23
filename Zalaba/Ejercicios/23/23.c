#include <stdio.h>
#include <stdlib.h>
/*
23. De 3 números ingresados desde el teclado por el usuario, indicar cuál es el mayor

*/

main()
{
	float i,num,max;
	int cont=1,flag=0;
	char rta;
	do
	{
		cont=1;
		flag=0;
		max=0;
		system("cls");
		for(i=0;i<3;i++)
		{
			printf("Ingrese numero %d/3: ",cont);
			scanf("%f",&num);
			if(flag==0 || num>max)
			{
				max=num;
				flag=1;
			}
		cont++;	
		}
		printf("\nEl numero mayor es: %.2f",max);
		
		printf("\nDesea seguir usando esta aplicacion? (S/N): ");
		rta=tolower(getche());
		while(rta!='s' && rta!='n')
		{
			printf("\nError respuesta distinta de S y N. Desea seguir usando esta aplicacion?(S/N): ");
			rta=tolower(getche());
		}
	}while(rta=='s');
	
	
}
