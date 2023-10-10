#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    c='T';
    printf(" %d\n", isalpha(c));

    c='D';
    printf("%d\n", isalpha(c));

    c= 9; 
  printf("%d\n", isalpha(c));

  c= 'a'; 
  printf("%d\n", isalpha(c));


c ='108'; 
  printf("%d\n", isalpha(c));

    return 0;
}