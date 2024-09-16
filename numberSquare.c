#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void numSquare(int *ptr);

int main(void)
{
    int number = 8;
    //const int *numPtr = &number;
    numSquare(&number);

    printf("the square of the number is %d\n", number);
    return 0;
}

void numSquare(int *ptr)
{
    int temp = *ptr;
    *ptr = temp * temp;
}
