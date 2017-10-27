#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    char auxNombre[51];
    char auxApellido[51];
    char auxId[5];
    char auxEmpty[6];
    if(pFile!=NULL && pArrayListEmployee!=NULL)
    {
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%s",auxId,auxNombre,auxApellido,auxEmpty);
        /*Indico con "[^,]" que lea hasta que encuentre una coma y luego me lo guarde en el respectivo auxiliar.
          la coma entre cada "[^,]" indica que se saltee dicha coma del archivo que esté leyendo, ya que no necesito
          guardar esa coma en mi array list.
        */






    }
    else
    {
        printf("\nNo se pudo abrir el archivo o el array");
        return 1;
    }

    return 0;
}
