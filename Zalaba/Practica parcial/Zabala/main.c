#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 100
#define MAXP 1000
/*
Se debe desarrollar un sistema (en ANSI C) de venta de productos al estilo
mercadolibre. En este sistema existirán usuarios, los cuales ingresarán utilizando
su nombre de usuario y password. Mediante la plataforma se podrá comprar y
vender productos, estos se encuentran definidos por un nombre y precio. La
porción del sistema que deberá realizarse se centrará en la venta de productos y
consta de un menú con las siguientes opciones:

1. ALTA DE USUARIO:​ Se piden los datos del usuario requeridos para que el
sistema pueda funcionar.
2. MODIFICAR DATOS DEL USUARIO:​ Se ingresa el ID del usuario, permitiendo
modificar sus datos.
3. BAJA DEL USUARIO:​ Se ingresa el ID del usuario y eliminará junto con todos
sus productos a la venta.
4. PUBLICAR PRODUCTO:​ Se ingresará el ID del usuario y se pedirán los datos
del producto a publicar (nombre, precio y stock)


*/
int main()
{
   struct Usuario E_Usuario[MAX];
   struct Producto E_Producto[MAXP];
   int opcion;
   int posicionLibre;
   int largo=0;
   char rta;

   CargarEspaciosLibres(E_Usuario,MAX);
   do
   {
       system("cls");
       opcion=Menu();
       switch(opcion)
       {
       case 1:

        posicionLibre=BuscarLibre(E_Usuario,MAX);
        AltaUsuario(E_Usuario,posicionLibre);
        largo++;
        break;
       case 2:
        ModificarUsuario(E_Usuario,largo);
        break;

       case 3:
        BajarUsuario(E_Usuario,largo);
        break;
         /*
            HASTA ACA FUNCIONA.
         */

       case 4:
        PublicarProducto(E_Usuario,E_Producto,largo);
        break;

       default:
        break;
       }

    rta=VolverMenu();
   }while(rta=='s');
    MostrarListaUsuario(E_Usuario,E_Producto,largo);
    return 0;
}
