// Author: Harry Moss
// Date: 08.05.2024

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;             // argc is the number of command line arguments including the program name
    char *argument1 = argv[0];                // argv[0] is always the program name
    char *argument2 = argv[1];                // argv[1] is the first command line argument

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);

    return 0;
}
