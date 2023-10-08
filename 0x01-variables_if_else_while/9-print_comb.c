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
   int num2;

   num1 = 0 ; 
   num2 = 9;

   while (num1 <= 9 && num2 >=0)
   {
	 putchar(num1 + '0');
	 putchar(',');
	 putchar(' ');
	 num1++;
	 num2--;
   }
   putchar('\n');


return (0);
}
