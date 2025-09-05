#include <stdio.h>

int main() {
    int number = 24, guess_number;

    while (1) {
        printf("Enter your guess (between 1-50): ");
        scanf("%d", &guess_number);

        if (number > guess_number) {
            printf("Your guess is too small! Try again.\n");
        }
        else if (number < guess_number) {
            printf("Your guess is too large! Try again.\n");
        }
        else {
            printf(" Congratulations! You guessed it right.\n");
            break; 
        }
    }

    return 0;
}