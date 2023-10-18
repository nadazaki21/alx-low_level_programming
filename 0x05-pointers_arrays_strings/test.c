#include <stdio.h>

// int *foo()
// {
//      static int Data = 6;
//     printf(" the address of thar var is %p \n ",&Data);


//     return &Data;
// }
// int main()
// {
//     int *piData = NULL;
//     piData = foo();
   
//     printf("%d",*piData);
//     return 0;
// }


int *getAddress() {
    int num = 42;
    return &num;
}

int main() {
    int *ptr;

    // Call the function to get an address
    ptr = getAddress();

    // Access and print the value at the address
    printf("Value at the address: %d\n", *ptr);

    return 0;
}