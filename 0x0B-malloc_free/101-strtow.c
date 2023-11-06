#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - split a atring gin to 2 words
 * @str: pointer to sting to be splited
 * Return: double pointe to an array of stings
*/
char **strtow(char *str)
{
    int cursor, len ,k ;
    char **ptr;
    int i;

    if (str == NULL || *str == '\0')
    {
        return (NULL);
    }
    else
    {
        ptr = malloc(sizeof(char *) * 3);

        if (ptr == NULL)
        return (NULL);

        for (i = 0; i < 2; i++)
        {
            cursor = 0;
            len = 0;
            while (str[cursor] != ' ' || str[cursor] != '\0')
            {
                len++;
                cursor++;
            }

            ptr[i] = malloc(sizeof(char) * len);
            if (ptr[i] == NULL )
                return (NULL);

            for (k = 0; k <= len; k++)
            {
                if (k == len)
                {
                    ptr[i][k] = '\0';
                }
                else
                {
                    ptr[i][k] = str[i + k];
                }
            } 
        }

        ptr[2] = NULL;
        return (ptr);
    }
    
}