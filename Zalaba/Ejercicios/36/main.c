#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0;
    int cont2=0;
    int i;
    do
    {
        for(i=0;i<=10;i++)
        {
          printf("\n%d * %d =%d",cont,i,i*cont);
          if(i==10)
          {
              printf("\n------------");
          }
        }
        cont++;
        cont2++;

    }while(cont2<=10);
}
