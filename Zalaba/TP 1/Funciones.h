#include<stdio.h>
#include<stdlib.h>

float Sumar(float num1,float num2);
float Restar(float num1,float num2);
float Multiplicar(float num1,float num2);
float Dividir(float num1,float num2);
int Menu();
float CargarPrimerOperando();
float CargarSegundoOperando();
float Factorial(float num);

float Sumar(float num1,float num2)
{
    float resultado;
    resultado=num1+num2;
    return resultado;
}
float Restar(float num1,float num2)
{
    float resultado;
    resultado=num1-num2;
    return resultado;
}
float Multiplicar(float num1,float num2)
{
    float resultado;
    resultado=num1*num2;
    return resultado;
}
float Dividir(float num1,float num2)
{
    float resultado;

    resultado=num1/num2;
    return resultado;
}
int Menu()
{
    int menu;
    printf("\nElija una opcion numerica del menu: ");
    printf("\n 1. Ingresar 1er operando (A=x)");
    printf("\n 2. Ingresar 2do operando (B=y)");
    printf("\n 3. Calcular la suma (A+B)");
    printf("\n 4. Calcular la resta (A-B)");
    printf("\n 5. Calcular la division (A/B)");
    printf("\n 6. Calcular la multiplicacion (A*B)");
    printf("\n 7. Calcular el factorial (A!)");
    printf("\n 8. Calcular todas las operaciones");
    printf("\n 9. Salir");
    printf("\n");
    scanf("%d",&menu);
    //while(menu!= 1 && menu!=2 && menu!=3 && menu!=4 && menu!=5 && menu!=6 && menu!=7 && menu!=8 && menu!=9)
    while(menu>9 || menu<1)
	{
        system("cls");
        printf("\nError opcion no valida. Relija una opcion numerica del menu: ");
	    printf("\n 1. Ingresar 1er operando (A=x)");
	    printf("\n 2. Ingresar 2do operando (B=y)");
	    printf("\n 3. Calcular la suma (A+B)");
	    printf("\n 4. Calcular la resta (A-B)");
	    printf("\n 5. Calcular la division (A/B)");
	    printf("\n 6. Calcular la multiplicacion (A*B)");
	    printf("\n 7. Calcular el factorial (A!)");
	    printf("\n 8. Calcular todas las operaciones");
	    printf("\n 9. Salir");
	    printf("\n");
        scanf("%d",&menu);
    }
    return menu;

}

float CargarPrimerOperando()
{
	float num1;
		printf("\nIngrese 1er operando: ");
		scanf("%f",&num1);
		return num1;
}
float CargarSegundoOperando()
{
	float num2;
		printf("\nIngrese 2do operando: ");
		scanf("%f",&num2);
		return num2;
}

float Factorial(float num)
{
	int i=1;
	float factorial=1;
	for(i;i<=num;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}
