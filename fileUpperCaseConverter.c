// Author: Harry Moss
// Date: 08.05.2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    FILE *fp_in = NULL, *fp_temp = NULL;
    char filename[] = "text.txt";
    char tempFilename[] = "TEMPtext.txt";
    char ch;

    fp_in = fopen(filename, "r"); 
    if (fp_in == NULL) {
        printf("Error opening.\n");
        return -1;
    }

    fp_temp = fopen(tempFilename, "w"); 
    if (fp_in == NULL) {
        printf("Error opening.\n");
        fclose(fp_in);
        return -1;
    }

    while((ch = fgetc(fp_in)) != EOF)
    {
        if(islower(ch))
        {
            ch = toupper(ch);
        }
        fputc(ch, fp_temp);
    }

    fclose(fp_in);
    fclose(fp_temp);

    if (remove(filename) != 0) {
        printf("Error deleting input file.\n");
        return 1;
    }

    if (rename(tempFilename, filename) != 0) {
        printf("Error renaming temporary file.\n");
        return 1;
    }

    printf("File content successfully written to temporary file and original file replaced.\n");

    return 0;
}
