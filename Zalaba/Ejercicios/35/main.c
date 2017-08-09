#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0;i<100;i++)
    {
        printf("%d ",i);
        if(i==25 || i==50 || i==75)
        {
            printf("\n");
        }

    }
}
