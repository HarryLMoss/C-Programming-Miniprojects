#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float commonDivisor(int val1, int val2);
float absCalc(float val3);
float sqrtCalc(float val4);

int main(void)
{

    int input1 = 0, input2 = 0;
    float input3 = 0.0, input4 = 0.0;

    // Greatest Common Divisor
    printf("Type in a 2 non-negative integers with a space in between: ");
    scanf("%d %d", &input1, &input2);
    printf("The greatest common divisor is %.2f\n\n", commonDivisor(input1, input2));

    // Abs Calculator
    printf("Type in a floating point number: ");
    scanf("%f", &input3);
    printf("The absolute value is %.2f\n\n", absCalc(input3));

    // Square Root Calculator
    printf("Type in another floating point number: ");
    scanf("%f", &input4);
    float sqrtResult = sqrtCalc(input4);
    if (sqrtResult != -1)
    {
        printf("The square root is %.2f\n\n", sqrtResult);
    }
    else
    {
        printf("ERROR - Only non-neg values are allowed\n\n");
    }

    return 0;
}

float commonDivisor(int val1, int val2)
{
    int i, maxDivisor;

    // Find the smaller of the two input numbers
    int smaller = val1 < val2 ? val1 : val2;

    // Iterate through all possible divisors of the smaller number
    for (i = 1; i <= smaller; i++)
    {
        // If the current number is a divisor of both input numbers, update the max_divisor
        if (val1 % i == 0 && val2 % i == 0) {
            maxDivisor = i;
        }
    }

    // Return the largest divisor found
    return maxDivisor;
}

float absCalc(float val3)
{
    if (val3 < 0)
    {
        val3 = val3 * -1.0;
    }
    return val3;
}

float sqrtCalc(float val4)
{
    float returnValue = 0.0;

    if (val4 < 0)
    {
        returnValue = -1.0;
    }

    float guess = val4 / 2; // Initial guess
    float prevGuess = 0;
    
    // Newton-Raphson convergence method
    if (returnValue != -1.0)
    {
        while (guess != prevGuess)
        {
            prevGuess = guess;
            guess = (guess + val4 / guess) / 2;
            returnValue = guess;
        }
    }
    return returnValue;
}