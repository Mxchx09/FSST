#include <stdio.h>

int main() {

    printf("Hello, World!\n");

    int a;

    scanf("%d", &a);

    // %d .. Ganzzahl
    // %f .. Gleitkommazahl
    // %c .. Zeichen
    // %s .. Zeichenkette (String)

    int doubleValue;
    doubleValue = a * 2;

    printf("Value of a: %d\n", a);
    printf("Double value of a: %d\n", doubleValue);

    while (doubleValue > 100) { 
        doubleValue = doubleValue * 2;

    }
    if (doubleValue == 100) {
        printf("Double value is exactly 100.\n");

    }

    for (int i = 0; i < 10; i++) {
        printf("* %d\n", i);
    }

    return 0;
}