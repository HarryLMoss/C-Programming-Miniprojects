// Author: Harry Moss
// Date: 08.05.2024

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double minutes = 0.0;
    double minutesInYear = 0.0;
    double years = 0.0;
    int days = 0.0;

    printf("Enter the number of minutes into the terminal: ");
    scanf("%lf", &minutes);

    minutesInYear = (60 * 24 * 365);
    years = (minutes / minutesInYear);
    days = (int) (years * 365);        // explicit type cast to integer

    printf("Years: %f\n", years);
    printf("Days: %d", days);

    return 0;
}
