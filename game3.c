#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 5;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1;  // Random number between 1 and 100

    printf("Welcome to Guess the Number Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", attempts);

    for(int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if(guess == number) {
            printf("Congratulations! You guessed it right.\n");
            return 0;  // End the game
        } else if(guess < number) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("Too high! Try a lower number.\n\n");
        }
    }

    printf("Game Over! The number was %d.\n", number);
    return 0;
}