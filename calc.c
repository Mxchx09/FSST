#include <stdio.h>
#include <stdbool.h>

int main() {
    float x, y;
    char operator;

    float sum, difference, product, quotient;

    bool again = true;

    while (again) {
       printf("Enter your question: ");
        scanf("%f %c %f", &x, &operator, &y);

        if (operator == '+') {
            sum = x + y;
            printf("%.2f + %.2f = %.2f\n", x, y, sum);

        }
        
        if (operator == '-') {
            difference = x - y;
            printf("%.2f - %.2f = %.2f\n", x, y, difference);
        }

        if (operator == '*') {
            product = x * y;
            printf("%.2f * %.2f = %.2f\n", x, y, product);
        }

        if (operator == '/') {
            if (y != 0) {
                quotient = (float)x / y;
                printf("%.2f / %.2f = %.2f\n", x, y, quotient);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        }
        printf("Sum of %.2f and %.2f is %.2f\n", x, y, sum);
        
        printf("Do you want to add another pair of numbers? (y/n): ");

        char choice;
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y') {
            again = false;
        }
    }

    return 0;
}
