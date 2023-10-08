#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return:The program returns 0 as  sucessful excution
 */
int main(void)
{
int num;
num = 0x30;


	while (num <= 0x39)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
return (0);
}
