#include <stdio.h>

int main() {

    float a;
    float b;
    char choice;
    

    while (1) {
            printf("\nGib 2 komma-seperierte zahlen ein:\n> ");
            scanf("%f, %f", &a, &b);

            if (a < b) {
                printf("%.2f ist kleiner als %.2f",a, b);
            }
            else if (a > b){
                printf("%.2f ist groesser als %.2f", a, b);
            }

            else {
                printf("%.2f ist gleich gross wie %.2f", a, b);
                continue;
            }

            printf("\nNochmal? [y/n]\n> ");
            scanf(" %c", &choice);
            
            if (choice == 'n' || choice == 'N') {
                break;
            }
        }

    }
   