#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void print_char(va_list x)
{
	printf("%c",va_arg(x, int));
}
void print_float(va_list x)
{
   printf("%f",va_arg(x, double));
}
void print_integer(va_list x)
{
	printf("%d",va_arg(x, int));
}
void print_string(va_list x)
{
	char *ptr;
	ptr = va_arg(x, char*);
	if (ptr != NULL)
	{
	   printf("%s", ptr);
	}
	else
	{
		printf("(nil)");
	} 
}