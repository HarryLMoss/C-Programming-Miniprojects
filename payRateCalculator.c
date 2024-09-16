#include <stdio.h>
#include <stdlib.h>





// NEXT TIME CREATE CONSTANT VARIABLES FOR PAYRATE/TAX RATES ETC
// WE DON'T WANT 'MAGIC NUMBERS' IN OUR PROGRAM!!




int main()
{
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;
    double payRate = 12.0;
    double hoursWorked = 0.0;

    printf("Enter the number of hours worked this week: ");
    scanf("%lf", &hoursWorked);

    //gross pay calculations
    if (hoursWorked <= 40){
        grossPay = (hoursWorked * payRate);
    }
    else {
        grossPay = (40 * payRate) + (hoursWorked - 40) * payRate * 1.5;
        //COULD USE A LOCAL VARIABLE HERE INSTEAD
    }

    //taxes
    if (grossPay <= 300.0)
    {    
        taxes = grossPay * 0.15;
   
    }
    else if (grossPay > 300 && grossPay <= 450)
    {
        taxes = 300 * 0.15;
        taxes += (grossPay - 300) * 0.2;
    }
    else if (grossPay > 450)
    {
        taxes = 300 * 0.15;
        taxes += 150 * 0.2;
        taxes += (grossPay - 450) * 0.25;
    }

    //net pay calculation
    netPay = grossPay - taxes;

    printf("Gross Pay = %.2f\n", grossPay);
    printf("Taxes = %.2f\n", taxes);
    printf("Net Pay = %.2f\n", netPay);

    return 0;
}