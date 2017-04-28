#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct E_lista
{

    char nombre[50];
    int edad;
    int estado;
    int dni;

};
typedef struct E_lista Lista;
//Las funciones desarrolladas estan en el mismo orden que en la lista de prototipos.
/* 1 */void MostrarLista(Lista agenda[],int MAX);
/* 2 */void CargarLista(Lista agenda[],int MAX);
/* 3 */void BorrarUsuarioDeLaLista(Lista agenda[],int MAX);
/* 4 */void OrdenarYMostrarListaPorNombre(Lista agenda[],int MAX);
/* 5 */int ContadorMenores18(Lista agenda[],int MAX);
/* 6 */int Contador19a35(Lista agenda[],int MAX);
/* 7 */int ContadorMayoresA35(Lista agenda[],int MAX);
/* 8 */int Menu();
/* 9 */char VolverMenu();

