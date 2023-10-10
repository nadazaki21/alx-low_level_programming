#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{   
    int i ;
    int j ;  

    for (i = 0 ; i <= 23 ; i++)
    {
        for ( j = 0; j < 60 ; j++)
        {
            printf("%.2d:%.2d\n",i ,j);
        }
        
    }
}
