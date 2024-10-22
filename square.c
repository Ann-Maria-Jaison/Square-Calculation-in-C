#include <stdio.h>

int main() {
    int number, square;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the square
    square = number * number;

    // Display the result
    printf("The square of %d is %d.\n", number, square);

    return 0;
}
