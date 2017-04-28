#include "funciones.h"
//  1--------------------------------------------------------------------------------------------------------------------
void MostrarLista(Lista agenda[],int MAX)
{
	int i;
	for(i=0;i<MAX;i++)
	{
		printf("\n Nombre: %s",agenda[i].nombre);
		printf("\n Edad: %d",agenda[i].edad);
		printf("\n DNI: %d",agenda[i].dni);	
	}
}
//  2--------------------------------------------------------------------------------------------------------------------
void CargarLista(Lista agenda[],int MAX)
{
	int cont=1;
	int i;
	for(i=0;i<MAX;i++)
	{
		system("cls");
		printf("%d/%d",cont,MAX);
		printf("\nIngrese nombre: ");
		fflush(stdin);
		gets(agenda[i].nombre);
		printf("\n Ingrese edad: ");
		scanf("%d",&agenda[i].edad);
		while(agenda[i].edad<=0)
		{
			printf("\nError edad no puede ser menor a 0 (Cero). Reingrese:");
			scanf("%d",&agenda[i].edad);
		}
		printf("\n Ingrese D.N.I: ");
		scanf("%d",&agenda[i].dni);
		agenda[i].estado=1;
		cont++;
	}
}
//  3--------------------------------------------------------------------------------------------------------------------
void BorrarUsuarioDeLaLista(Lista agenda[],int MAX)
{
	int i;
	int aux;
	char rta;
	int flag=0;
	printf("\n Ingrese DNI del usuario que desea borrar: ");
	scanf("%d",&aux);
	for(i=0;i<MAX;i++)
	{
		if(aux==agenda[i].dni && agenda[i].estado==1)
		{
			system("cls");
			printf("\nSe ha encontrado usuario. Con los siguientes datos: ");
			printf("\n Nombre: %s",agenda[i].nombre);
			printf("\n Edad: %d",agenda[i].edad);
			printf("\n DNI: %d",agenda[i].dni);
			printf("\n Seguro que desea borrar esos datos(S/N): ");
			rta=tolower(getche());
			while(rta!='s' && rta!='n')
			{
				system("cls");
				printf("\nError respues equivocada. Responda S o N: ");
				rta=tolower(getche());
			}	
			if(rta=='s')
			{
				printf("\nEl usuario ha sido borrado satisfactoriamente.");
				agenda[i].estado=0;	
				flag=1;
			}
		}
		else if(aux==agenda[i].dni && agenda[i].estado==0 && flag==0)
		{
			printf("\n Error.El usuario con el dni: %d.Ya ha sido borrado previamente.",agenda[i].dni);
		}
	}	
}

//  4--------------------------------------------------------------------------------------------------------------------

void OrdenarYMostrarListaPorNombre(Lista agenda[],int MAX)
{
	int i;
	int j;
	int auxedad;
	int auxdni;
	char auxnombre[20];
	
	for(i=0;i<MAX-1;i++)
	{
		for(j=1;j<MAX;j++)
		{
			if(agenda[i].nombre<agenda[j].nombre)
			{
				strcpy(auxnombre,agenda[i].nombre);
				strcpy(agenda[i].nombre,agenda[j].nombre);
				strcpy(agenda[j].nombre,auxnombre);
				
				auxedad=agenda[i].edad;
				agenda[i].edad=agenda[j].edad;
				agenda[j].edad=auxedad;
				
				auxdni=agenda[i].dni;
				agenda[i].dni=agenda[j].dni;
				agenda[j].dni=auxedad;
			}
		}
	}
	for(i=0;i<MAX;i++)
	{
		printf("\n Nombre: %s",agenda[i].nombre);
		printf("\n Edad: %d",agenda[i].edad);
		printf("\n DNI: %d",agenda[i].dni);	
	}
}



//  5--------------------------------------------------------------------------------------------------------------------
int ContadorMenores18(Lista agenda[],int MAX)
{
	int contMenores18=0;
	int i;
	for(i=0;i<MAX;i++)
	{
		if(agenda[i].edad>0 && agenda[i].edad<=18)
		{
			contMenores18++;
		}
	}
	return contMenores18;
}
//  6--------------------------------------------------------------------------------------------------------------------
int Contador19a35(Lista agenda[],int MAX)
{
	int cont19a35=0;
	int i;
	for(i=0;i<MAX;i++)
	{
		if(agenda[i].edad>0 && agenda[i].edad<=18)
		{
			cont19a35++;
		}
	}	
	return cont19a35;
}
//  7--------------------------------------------------------------------------------------------------------------------
int ContadorMayoresA35(Lista agenda[],int MAX)
{
	int contMayoresA35=0;
	int i;
	for(i=0;i<MAX;i++)
	{
		if(agenda[i].edad>0 && agenda[i].edad<=18)
		{
			contMayoresA35++;
		}
	}
	return contMayoresA35;	
}




//  8--------------------------------------------------------------------------------------------------------------------
int Menu()
{
    int rta;
	    printf("\nIngrese una opcion del menu: ");
	    printf("\n1- Agregar personas");
        printf("\n2- Borrar persona");
        printf("\n3- Imprimir lista ordenada por  nombre");
        printf("\n4- Imprimir grafico de edades");
        printf("\n5- Salir");
	    printf("\n");
	    scanf("%d",&rta);
    while(rta>9  || rta<1)
    {
        system("cls");
        printf("\nError Reingrese opcion.");
        printf("Ingrese una opcion del menu: ");
        printf("\n1- Agregar persona");
        printf("\n2- Borrar persona");
        printf("\n3- Imprimir lista ordenada por  nombre");
        printf("\n4- Imprimir grafico de edades");
        printf("\n5- Salir");
	    printf("\n");
	    scanf("%d",&rta);
    }
    return rta;
}
//  9--------------------------------------------------------------------------------------------------------------------
char VolverMenu()
{
	char rta;
	printf("\nDesea volver al menu? S/N");
	rta=tolower(getche());
		while(rta!='s' && rta!='n')
		{
			system("cls");
			printf("\nError respues equivocada. Responda S o N: ");
			rta=tolower(getche());
		}	
		return rta;
}

