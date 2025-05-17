#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses=0;
    int guessed;

    //printf("Random number between 1 and 100: %d\n", randomNumber);
    do
    {
        printf("Guess the number:\n");
        scanf("%d", &guessed);
        if (guessed>randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if(guessed<randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!!");
        }
        no_of_guesses++;
    } while (randomNumber!=guessed);

    if(guessed==randomNumber)
    {
        printf("You guessed the number\n");
    }

    printf("You guesses the number is %d guesses\n", no_of_guesses);
    return 0;
}
