#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return:The program returns 0 as  sucessful excution
 */
int main(void)
{
char num;
char letter;
num = 0x30;
letter = 0x61;


	while (num <= 0x39)
	{
		putchar(num);
		num++;
	}
	while (letter <= 0x66)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
return (0);
}
