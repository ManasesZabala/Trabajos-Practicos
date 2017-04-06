#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
/*
1 Trabajo pr�ctico N� 1
1.1 Descripci�n
Hacer una calculadora. Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular la suma (A+B)
4. Calcular la resta (A-B)
5. Calcular la division (A/B)
6. Calcular la multiplicacion (A*B)
7. Calcular el factorial (A!)
8. Calcular todas las operaciones
9. Salir
� Todas las funciones matem�ticas del men� se deber�n realizar en una biblioteca aparte,
que contenga las funciones para realizar las 4 operaciones.
� En el men� deber�n aparecer los valores actuales cargados en los operandos A y B
(donde dice �x� e �y� en el ejemplo, se debe mostrar el n�mero cargado)
� Deber�n contemplarse los casos de error (divisi�n por cero, etc)
� Documentar todas las funciones
*/

main()
{
	
	float num1,num2,resultado;
	int menu,menu2,flag1=0,flag2=0;
	char rta;
	do
	{
		system("cls");
		
		menu=Menu();
		switch(menu)
		{
			case 1:
				num1=CargarPrimerOperando();
				
				break;
				
			case 2:
				num2=CargarSegundoOperando();
				
				break;
				
			case 3:
					resultado=Sumar(num1,num2);
					printf("\n El resultado de la Suma es: %.2f",resultado);
				break;
			case 4:
					resultado=Restar(num1,num2);
					printf("\n El resultado de la Resta es: %.2f",resultado);
				break; 
			case 5:
					resultado=Dividir(num1,num2);
					printf("\n El resultado de la Divicion es: %.2f",resultado);
					break;
			case 6:
					resultado=Multiplicar(num1,num2);
					printf("\n El resultado de la Multiplicacion es: %.2f",resultado);
					break;
			case 7:
					resultado=Factorial(num1);
					printf("\n El resultado del factorial es: %.2f",resultado);
				
					break;
			case 8:
				resultado=Sumar(num1,num2);
				printf("\n El resultado de la Suma es: %.2f",resultado);
				resultado=Restar(num1,num2);
				printf("\n El resultado de la Resta es: %.2f",resultado);
				resultado=Dividir(num1,num2);
				printf("\n El resultado de la Divicion es: %.2f",resultado);
				resultado=Multiplicar(num1,num2);
				printf("\n El resultado de la Multiplicacion es: %.2f",resultado);
				resultado=Factorial(num1);
				printf("\n El resultado del factorial es: %.2f",resultado);
					break;
			case 9:
			break;									
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
