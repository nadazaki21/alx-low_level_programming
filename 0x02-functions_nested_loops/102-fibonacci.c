#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 50;
    long long int i, last;
    long  int result = 3;
    long long int before_last = 2;

    last = result ; 
    for (i = 0 ; i < n ; i++)
    {
        result = last + before_last;
        before_last = last;
        last = result;

        printf("%ld",result);
        putchar(',');
        putchar(' ');


    }

	return (0);
}
