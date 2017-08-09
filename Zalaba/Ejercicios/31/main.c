#include <stdio.h>
#include <stdlib.h>

/*
31. Por teclado se ingresa el valor hora de un empleado. Posteriormente se ingresa el nombre del empleado, la
antigüedad y la cantidad de horas trabajadas en el mes. Se pide calcular el importe a cobrar teniendo en
cuenta que el total resulta de multiplicar el valor hora por la cantidad de horas trabajadas, hay que sumarle
la cantidad de años trabajados multiplicados por $30, y al total de todas esas operaciones restarle el 13% en
concepto de descuentos. Imprimir el recibo correspondiente con el nombre, la antigüedad, el valor hora, el
total a cobrar en bruto, el total de descuentos y el valor neto a cobrar
*/
int main()
{
   float valorHora;
   char nombre[50];
   int antiguedad;
   int horasTrabajadas;
   int sueldoNeto;
   float adicional;
   int descuento;
   float total;
   int sueldoAdicional;

   printf("\nIngrese valor por hora de trabajo: ");
   scanf("%f",&valorHora);
   printf("\nIngrese nombre de empleado: ");
   fflush(stdin);
   gets(nombre);
   printf("\nIngrese antiguedad: ");
   scanf("%d",&antiguedad);
   printf("\nIngrese horas trabajadas: ");
   scanf("%d",&horasTrabajadas);

   sueldoNeto=valorHora * horasTrabajadas;
   adicional=antiguedad * 30;
   sueldoAdicional=sueldoNeto+adicional;
   descuento=sueldoAdicional % 13;
   total=sueldoAdicional-descuento;

   printf("\nNombre: %s",nombre);
   printf("\nAntiguedad: %d",antiguedad);
   printf("\nValor por hora: %.2f",valorHora);
   printf("\nTotalBruto: %d",sueldoAdicional);
   printf("\nDescuento: %d",descuento);
   printf("\nTotalNeto: %d",sueldoNeto);
   printf("\nSu sueldo final es de: %.2f",total);
}
