#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    FILE *fp = NULL;
    int c, count = 0;

    fp = fopen("text.txt", "r"); // replace filename.txt with your file name

    if (fp == NULL) {
        printf("Error opening.\n");
        return -1;
    }

    while((c = fgetc(fp)) != EOF)
    {
        if(c == '\n')
            count++;
    }

    printf("The number of lines are %d", count + 1);

    return 0;
}