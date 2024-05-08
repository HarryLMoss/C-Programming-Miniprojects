// Author: Harry Moss
// Date: 08.05.2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    FILE *fp_in = NULL;
    char filename[] = "text.txt";
    char ch;
    long pos;

    fp_in = fopen(filename, "r"); 
    if (fp_in == NULL)
    {
        printf("Error opening.\n");
        return -1;
    }

    fseek(fp_in, 0, SEEK_END);
    pos = ftell(fp_in);

    while(pos >= 0)
    {
        fseek(fp_in, pos, SEEK_SET);
        ch = fgetc(fp_in);
        if(ch != EOF)
        {
            printf("%c", ch);
        }
        pos--;
    }

    fclose(fp_in);


    return 0;
}
