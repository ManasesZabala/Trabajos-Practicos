#include <stdio.h>
#include <stdlib.h>

struct Usuario
{
    char nombre[50];
    char contrasena[50];
    int ocupado;
    int id;
    int idProducto[1000];
    int contProducto;

};
typedef struct Usuario E_Usuario;

struct Producto
{
    char nombreProducto[50];
    float precioProducto;
    int stockProducto;
    int idProducto;
};
typedef struct Producto E_Producto;

/* 1 */int Menu();
/* 2 */char VolverMenu();
/* 3 */void AltaUsuario(E_Usuario usuarios[],int posicion);
/* 4 */void MostrarListaUsuario(E_Usuario usuarios[],E_Producto productos[],int LARGO);
/* 5 */int BuscarLibre(E_Usuario usuarios[],int LARGO);
/* 6 */void CargarEspaciosLibres(E_Usuario usuarios[],int LARGO);
/* 7 */void ModificarUsuario(E_Usuario usuarios[],int LARGO);
/* 8 */void BajarUsuario(E_Usuario usuarios[],int LARGO);
/* 9 */void PublicarProducto(E_Usuario usuarios[],E_Producto productos[],int LARGO);
