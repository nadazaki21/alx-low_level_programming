#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i, j, k, current_len, next_len;

    if (ac == 0 || av == NULL)
    {
        printf("No args\n");
        /*return (NULL);*/
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
                av[i][current_len] = '\n';
                av[i][current_len + k + 1] = av[i+1][k];
    
            }
            
        }

        printf("%s", av[0]);
    }

    return 0;
}
