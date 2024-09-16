#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand()%21;
    int guessNumber;
    int tries = 5;

    while (guessNumber != randomNumber)
    {
        //CAN ALSO USE A FOR LOOP HERE
        printf("You have %d tr%s left.\nEnter a guess: ", tries, tries == 1 ? "y" : "ies");
        scanf("%d", &guessNumber);
        --tries;
        if (tries < 1 || guessNumber == randomNumber) {break;}
        else {
            printf("Sorry, %d is wrong. ", guessNumber);
            if (guessNumber < 0 || guessNumber > 20)
            {
                printf("I said the number is between 0 and 20! ");
            }
            else if (guessNumber > randomNumber)
            {
                printf("My number is less than that. ");
            }
            else if (guessNumber < randomNumber)
            {
                printf("My number is more than that. ");
            }
        }
    }

    if (tries != 0)
    {
        printf("Congratulations! You guessed it!");
    }
    else
    {
        printf("Unlucky, better luck next time!");
    }
    return 0;
}