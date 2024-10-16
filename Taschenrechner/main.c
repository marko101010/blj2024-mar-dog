#include <stdio.h>

int main() {
    int n, i;
    float result, number;

    // Enter the number of values to subtract
    printf("How many numbers do you want to subtract? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of values must be greater than 0.\n");
        return 1;
    }

    // Enter the first number and set it as the initial result
    printf("Enter the 1st number: ");
    scanf("%f", &result);

    // Enter the remaining numbers and subtract them from the result
    for (i = 2; i <= n; i++) {
        printf("Enter the %dth number: ", i);
        scanf("%f", &number);
        result -= number;
    }

    // Display the result
    printf("The result of the subtraction is: %.2f\n", result);

    return 0;
}
