#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return:The program returns 0 as  sucessful excution
 */
int main(void)
{
char upper_letter;
char lower_letter;
upper_letter = 0x61;
lower_letter = 0x41;


	while (upper_letter <= 0x7A)
	{
		putchar(upper_letter);
		upper_letter++;
	}

    while (lower_letter <= 0x5A)
	{
		putchar(lower_letter);
		lower_letter++;
	}
	putchar('\n');
return (0);
}
