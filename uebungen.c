#include <stdio.h>
#include <stdbool.h>

void countdown() {
    
    int n;

    printf("Gib den Startwert fuer den Countdown ein: ");
    scanf("%d", &n);

    while (n >= 0) {

        printf("%d\n", n);
        n--;
        
    }
    printf("Start!");
}

void save_money() {

    int inpt;
    int sum = 0;

    printf("Gebe den Betrag ein den du gespart hast (0 = quit):\n");

    while (1) {
        scanf("%d", &inpt);

        if (inpt != 0) {
            sum += inpt;
        }
        else {
            break;
        }
         
    }

    printf("Du hast %d Euro Gespart", sum);

}

void tresor(int PIN) {

    bool is_correct = false;
    int pin_guess; 

    while (is_correct == false) {
        scanf("%d", &pin_guess);

        if (pin_guess == PIN) {
            is_correct = true;
        }

        printf("Pin %d ist inkorrekt!", pin_guess);

    }
    printf("PIN Korrekt!");
}

int main() {

    tresor(1234);

    return 0;
}