#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number
    // printf("Random Number: %d\n", randomNumber);
    printf("Guess the number: ");

    do
    {
        scanf("%d", &guessed_number);
        no_of_guesses++;
        if (guessed_number > randomNumber)
        {
            printf("Lower number please\n");
            printf("Please Guess the number again: ");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher number please\n");
            printf("Please Guess the number again: ");
        }
        else
        {
            printf("Congrats!!!!");
        }
    } while (guessed_number != randomNumber);
    if (guessed_number == randomNumber)
    {
        printf("Your score is: %d", no_of_guesses);
    }
    

    return 0;

}