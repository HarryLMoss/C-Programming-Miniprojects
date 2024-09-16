#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int number = 15;
    int *pnumber = NULL;

    pnumber = &number;

    printf("the address of the number is %p\n", &number);
    printf("the address of the pointer is %p\n", &pnumber);
    printf("the value of the pointer is %p\n", pnumber);
    printf("the value of what the pointer is pointing to is %d\n", *pnumber);
    return 0;
}
