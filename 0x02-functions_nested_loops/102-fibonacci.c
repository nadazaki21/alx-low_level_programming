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
    long  int result = 2;
    long  int before_last = 1;

    last = result ;

    printf("%d", 1);
    putchar(',');
    putchar(' ');
    printf("%d", 2); 
    putchar(',');
    putchar(' ');

    for (i = 2 ; i < n ; i++)
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
