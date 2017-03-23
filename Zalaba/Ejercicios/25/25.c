#include <stdio.h>
#include <stdlib.h>
/*
25. En una tienda de artículos para caballeros al final del día se carga en la computadora las boletas que
confeccionaron los distintos vendedores para saber cuánto fue la comisión del día de cada uno de ellos. Los
datos que se ingresan (por boleta) son: 
el número de vendedor y el importe.
 Cuando no hay más boletas para cargar se ingresa 0. Teniendo en cuenta que el negocio tiene 3 vendedores y que el porcentaje sobre
las ventas es del 5%, indicar cuánto ganó cada vendedor en el día
*/

main()
{
	int vend,rta;
	float cont1=0,cont2=0,cont3=0,importe;
	do
	{
		system("cls");
		printf("\nIngrese que numero de vendedor es usted(1 / 2 / 3 ): ");
		scanf("%d",&vend);
		while(vend!=1 && vend!=2 && vend!=3)
		{
			printf("\nError numeor de vendedor invalido. \n Reingrese que numero de vendedor es usted(1 / 2 / 3 ): ");
			scanf("%d",&vend);
		}
		printf("\nIngrese Importe de la venta realizada: ");
		scanf("%f",&importe);
		switch(vend)
		{
			case 1:
					cont1=cont1+importe;
					break;
			case 2:
					cont2=cont2+importe;
					break;	
			case 3:
					cont3=cont3+importe;
					break;
				
		}
		printf("\nDesea seguir ingresando facturas? Oprima 0(cero)Para salir: ");
		scanf("%d",&rta);
	
	}while(rta!=0);
	printf("\nLa ganancia del vendedor 1 es: %.2f",cont1*0.05);
	printf("\nLa ganancia del vendedor 2 es: %.2f",cont2*0.05);
	printf("\nLa ganancia del vendedor 3 es: %.2f",cont3*0.05);
	
	
}
