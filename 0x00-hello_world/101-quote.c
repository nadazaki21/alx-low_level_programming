#include <stdio.h>
#include <unistd.h>
/**
* main - main fun
*
* puts function practise
* Return: here the error message displayed is going to be the same 
* as the output beacause the  streams , the error and the output
* were mereged toghether, if  you run it, it will produce the error
*and the output 
*/
int main(void)
{
dup2(2, 1); /* function to duplicat ethe file descriptor*/
puts("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
{return 1 ; }
}
