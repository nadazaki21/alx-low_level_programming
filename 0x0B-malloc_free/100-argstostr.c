#include <stdlib.h>
#include <stdio.h>
/**
 * 
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, current_len, next_len;

    if (ac == 0 || av == NULL)
    {
        return (NULL);
    }
    else
    {
        for (i = 0; i < ac - 1; i++)
        {
            current_len = 0; 
            j = 0;   

            while (av[i][j] != '\0')
            {
                current_len++;
                j++;
            }

            next_len = 0; 
            j = 0; 
 
            while (av[i + 1][j] != '\0')
            {
                next_len++;
                j++;
            }

            for (k = 0; k <= next_len; k++)
            {
                av[i][current_len] = av[i+1][k];
                if (k == next_len)
                {
                    av[i][current_len + 1] = '\n';
                }
            }
            
        }
        return (av[0]);
    }

}