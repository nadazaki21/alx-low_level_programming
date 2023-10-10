#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 50;
    long  int i, last;
    long  int result = 3;
    long  int before_last = 2;

    last = result ;

    printf("%d", 1);
    putchar(',');
    putchar(' ');
    printf("%d", 2); 
    putchar(',');
    putchar(' ');

    for (i = 3 ; i < n ; i++)
    {
        
        result = last + before_last;
        before_last = last;
        last = result;

        printf("%ld",result);

        if ( i !=  (n-1))
        {
            putchar(',');
            putchar(' ');
        }
        
        
    }
    putchar('\n');
	return (0);
}
