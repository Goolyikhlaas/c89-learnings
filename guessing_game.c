#include <stdio.h>
#include <stdlib.h>

int main(){

    int secretNumber = 5;   /* The secret number to guess */
    int guess;              /* The user's guess */
    int guessCount = 0;     /* Number of guesses made so far */
    int guessLimit = 3;     /* Maximum number of guesses allowed */
    int outOfGuesses = 0;   /* Flag to indicate if the user is out of guesses */

    /* Loop until the user guesses the correct number or runs out of guesses */
    while (guess != secretNumber && outOfGuesses == 0) {
        /* Check if the user has not exceeded the guess limit */
        if (guessCount < guessLimit){ 
            printf("Enter a number: ");  /* Prompt the user for a guess */
            scanf("%d", &guess);         /* Read the user's guess */
            guessCount++;                /* Increment the guess count */
        } else {
            outOfGuesses = 1;  /* Set the outOfGuesses flag to indicate the user is out of guesses */
        }
    }

    /* Check if the user is out of guesses */
    if (outOfGuesses == 1) {
        printf("You lost");   /* Display a message indicating the user lost */
    } else {
        printf("You won");    /* Display a message indicating the user won */
    }

    return 0; /* Return 0 to indicate successful completion */
}

