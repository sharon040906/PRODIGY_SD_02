#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int number, guess, attempts = 0;

    srand(time(0) + rand());

    int max;
    int choice;

    printf("Choose difficulty:\n");
    printf("1 - Easy (1 to 50)\n");
    printf("2 - Medium (1 to 100)\n");
    printf("3 - Hard (1 to 500)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) max = 50;
    else if (choice == 2) max = 100;
    else max = 500;

    // Generate random number
    number = rand() % max + 1;

    printf("\nGuess the number between 1 and %d\n", max);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high!\n");
        } 
        else if (guess < number) {
            printf("Too low!\n");
        } 
        else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != number);

    return 0;
}
