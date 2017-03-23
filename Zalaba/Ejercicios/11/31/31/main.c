#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
31. Por teclado se ingresa el valor hora de un empleado. Posteriormente se ingresa el nombre del empleado, la
antigüedad y la cantidad de horas trabajadas en el mes. Se pide calcular el importe a cobrar teniendo en
cuenta que el total resulta de multiplicar el valor hora por la cantidad de horas trabajadas, hay que sumarle
la cantidad de años trabajados multiplicados por $30, y al total de todas esas operaciones restarle el 13% en
concepto de descuentos.
Imprimir el recibo correspondiente con el

nombre,
la antigüedad,
el valor hora,
el total a cobrar en bruto,
el total de descuentos
y el valor neto a cobrar

*/
int main()
{
    char nombre[50];
    float valorxhora;
    int antiguedad;
    int horastrabajadas;
    int valoranos;
    float totalbruto;
    float totalfinal;
    float descuento;

    printf("\nIngrese valor por hora: ");
    scanf("%f",&valorxhora);
    printf("\nIngrese antiguedad: ");
    scanf("%d",&antiguedad);
    printf("\nIngrese horas trabajadas: ");
    scanf("%d",&horastrabajadas);
    fflush(stdin);
    printf("\nIngrese nombre: ");
    gets(nombre);
    valoranos=antiguedad*30;
    totalbruto=horastrabajadas*valorxhora;
    totalbruto=totalbruto+valoranos;
    descuento=totalbruto*0.15;
    totalfinal=totalbruto-descuento;
    printf("\nNombre: %s",nombre);
    printf("\nAntiguedad: %d",antiguedad);
    printf("\nValor por hora: %.2f",valorxhora);
    printf("\nTotal a cobrar bruto: %.2f",totalbruto);
    printf("\nTotal de descuento: %.2f",descuento);
    printf("\nTotal a cobrar final: %.2f",totalfinal);


    return 0;
}
