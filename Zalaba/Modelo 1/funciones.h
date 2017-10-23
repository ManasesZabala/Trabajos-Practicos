#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
struct LED
{
    char nombre[50];
    char direccion[50];
    float precio;
    int estado;
};
typedef struct LED Estructura_LED;

struct LCD
{
    char nombre[50];
    char direccion[50];
    float precio;
    int estado;

};
typedef struct LCD Estructura_LCD;

struct E_TV
{
    Estructura_LCD E_LCD;
    Estructura_LED E_LED;
};
typedef struct E_TV Estructura_Televisores;

/*1*/int Menu();
/* 2*/void PonerEstadosEnLibre(Estructura_Televisores E_TV[],int largo);
/*3*/char VolverMenu();
/*4*/void Alta(Estructura_Televisores E_TV[],int largo);
/*5*/ void Listar(Estructura_Televisores E_TV[],int largo);
