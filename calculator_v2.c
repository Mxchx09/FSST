#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {

    uint32_t a, b;
    char choice;

    printf("Gib 2 kommaseperierte ganze zahlen ein:\n> ");
    scanf("%u, %u", &a, &b);
    
    printf("Gib die Rechenoperation ein (+, -, *, /):\n> ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case '+':
        printf("%u + %u = %u", a, b, a + b);
        break;
    case '-':
        printf("%u - %u = %u", a, b, a - b);
        break;

    case '*':
        printf("%u * %u = %u", a, b, a * b);
        break;

    case '/':
        if (b != 0) {
            printf("%u / %u = %u", a, b, a / b);
        } else {
            printf("Fehler: Division durch Null ist nicht erlaubt.");
        }
        break;
    
    default:
        printf("Ungültige Rechenoperation");
        break;

    }

    printf("\n Differenz von %u und %u ist %u", a, b, abs(a - b));

}