#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return:The program returns 0 as  sucessful excution
 */
int main(void)
{
int num1;
num1 = 0;


	while (num1 <= 9)
	{
		putchar(num1 + '0');
		if (num1 != 9)
		{
		putchar(',');
		putchar(' ');
		}
		num1++;
	}
	putchar('\n');


return (0);
}
