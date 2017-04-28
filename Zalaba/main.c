#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 3
/*
Hacer un programa que defina un array de 20 ítems de esta estructura y con un menú como el
siguiente:
1. Agregar una persona
2. Borrar una persona
3. Imprimir lista ordenada por nombre
4. Imprimir gráfico de edades

Se utilizará el campo de estado para indicar si el ítem del array esta ocupado o no.

El gráfico deberá ser un gráfico de barras en donde se agruparán 3 barras:
• Menores de 18
• De 19 a 35
• Mayores de 35.
En el eje Y se marcarán la cantidad de personas en el grupo, y en el eje X el grupo
*/

int main()
{
	int i;
    int menu;
    char rta;
	struct E_lista agenda[MAX];
	

    do
    {
    	system("cls");
    	menu=Menu();
        	switch(menu)
        {
            case 1:
            	CargarLista(agenda,MAX);
                break;
            case 2:
            	BorrarUsuarioDeLaLista(agenda,MAX);
                break;
            case 3:
            	OrdenarYMostrarListaPorNombre(agenda, MAX);
                break;
            case 4:
            //No pude realizar el grafico.
                break;
            case 5:
                break;
        }
        rta=VolverMenu();
    }while(rta=='s');

   
}
