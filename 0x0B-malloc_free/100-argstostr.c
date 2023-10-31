#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatinates all argiments of main function
 * @ac: number of argument
 * @av: array of arguments
 * Return: pointer to the concatinates string
*/
char *argstostr(int ac, char **av)
{
    int i, j, len, position = 0;
    char *ptr;

    if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
    
    len = 0;
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            len++;
            j++;
        }
        len = len + ac;
    }

    ptr = malloc(sizeof(char) * (len + ac));

    if (ptr == NULL)
    {
        return NULL;
    }

    for (i = 0; i < ac; i++)
    {   
        j = 0;
        while (av[i][j] != '\0')
        {
            ptr[position] = av[i][j];
            j++;
            position++;
        }

        if (av[i][j] == '\0')
        {
            ptr[position] = '\n';
            position++;
        }
        
    }
    return ptr;
}