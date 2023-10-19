#include <stdio.h>
#include <string.h>

int main() {

    int countersrc =0 ; 
    char arr [] = "hii";

    while (*(arr+countersrc) != '\0')
    {
            countersrc++;
    }

    printf("%d\n",countersrc);
    return 0;
}


// while (*(n + i) != '\0')
// 	{
// 		if (*(n + i) == 'a' || *(n + i) == 'A')
// 		{
// 			*(n + i) = '4';
// 		}
// 		else if (*(n + i) == 'e' || *(n + i) == 'E')
// 		{
// 			*(n + i) = '3';
// 		}
// 		else if (*(n + i) == 'o' || *(n + i) == 'O')
// 		{
// 			*(n + i) = '0';
// 		}
// 		else if (*(n + i) == 't' || *(n + i) == 'T')
// 		{
// 			*(n + i) = '7';
// 		}
// 		else if (*(n + i) == 'l' || *(n + i) == 'L')
// 		{
// 			*(n + i) = '1';
// 		}
// 		i++;
// 	}