#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return:The program returns 0 as  sucessful excution
 */
int main(void)
{
char letter;
letter = 0x7A;


	while (letter >= 0x61)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
return (0);
}
