// Author: Harry Moss
// Date: 08.05.2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp = NULL;                //set file pointer to be NULL
    int c, count = 0;

    fp = fopen("text.txt", "r");    // replace text.txt with your file name

    if (fp == NULL) {
        printf("Error opening.\n"); // return error -1 if pointer still NULL
        return -1;
    }

    while((c = fgetc(fp)) != EOF)   // while loop until End Of File is reached
    {
        if(c == '\n')
            count++;
    }

    printf("The number of lines are %d", count + 1);

    return 0;
}
