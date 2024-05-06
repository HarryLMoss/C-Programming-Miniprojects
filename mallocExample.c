#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char *stringPtr = NULL;
    int limit = 0;
    
    printf("enter string limit: ");
    scanf("%d", &limit);

    stringPtr = (char*)malloc(limit*sizeof(char));

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

    free(stringPtr);
    stringPtr = NULL;
    return 0;
}
