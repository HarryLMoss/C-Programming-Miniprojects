// Author: Harry Moss
// Date: 08.05.2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char *stringPtr = NULL;            // set string pointer to NULL
    int limit = 0;
    
    printf("enter string limit: ");
    scanf("%d", &limit);

    stringPtr = (char*)malloc(limit*sizeof(char));    // start dynamic memory allocation

    if(stringPtr)
    {
        printf("enter a string: ");
        scanf("%s", stringPtr);

        printf("the string is %s\n", stringPtr);
    }
    else
    {
        printf("ERROR");
    }

    free(stringPtr);                // free the pointer after to prevent errors
    stringPtr = NULL;               // reset to NULL
    return 0;
}
