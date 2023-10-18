#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[10] = "Hi, "; // Initialize a destination string with a capacity of 10 characters

    strncpy(destination, source, 9); // Copy the first 9 characters from source to destination
    destination[9] = '\0'; // Null-terminate the destination manually

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}


// for (i = 0; i < (countersrc + 1); i++)
// 		{
// 			dest[i] = src[i];
// 		}