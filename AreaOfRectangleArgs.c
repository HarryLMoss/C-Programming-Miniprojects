// Author: Harry Moss
// Date: 08.05.2024

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])        // main function using command line arguments
{
    double width = atoi(argv[1]);       //convert command line strings into integers
    double height = atoi(argv[2]);

    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("The perimeter is %.2f\n", perimeter);    // .2 is to 2 decimal points
    printf("The area is %.2f\n", area);


    return 0;
}
