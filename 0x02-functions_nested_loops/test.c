#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    c='T';
    printf(" %d\n", islower(c));

    c='D';
    printf("%d\n", islower(c));

    c= 9; 
  printf("%d\n", islower(c));

  c= 'a'; 
  printf("%d\n", islower(c));


c= '108'; 
  printf("%d\n", islower(c));

    return 0;
}