int _strcmp(char *s1, char *s2)
{
    int i, j;
    int lenS1 = 0;
    int lenS2 = 0;
    int len; /*len with iwhich i will compare*/


    while (*(s1+lenS1) != '\0')
    {
            lenS1++;
    }

    while (*(s2+lenS2) != '\0')
    {
            lenS2++;
    }


    /* finding out which string is longer, we shall take the shorter */
    if (lenS1 > lenS2)
    {
        len = lenS2;
    }
    else if (lenS1 < lenS2)
    {
        len = lenS1;
    }
    else
    {
        len = lenS1;
    }


    for (i = 0; i < len; i++)
    {
        if (s1[i] > s2[i])
        {
            return (-15);
        }
        else if (s1[i] < s2[i])
        {
            return (15);
        }
        else
        {
            return 0;
        }
        
        
    }
    
    
}