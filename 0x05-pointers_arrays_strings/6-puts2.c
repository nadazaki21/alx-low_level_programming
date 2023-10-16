#include <string.h>
/**
 * puts2 - prints every other char in string
 * @str: pointer to sting to be printed
*/
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0 ; i < len ; i++)
	{
        if ((i%2) == 0)
        {
            printf("%d", *(str+i));
        }
        

	}
}
