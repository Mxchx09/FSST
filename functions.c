#include<stdio.h>

/*
Funktion welche Zahlen vergleicht. Rückgabewert:
    -1 wenn erste zahl kleiner als zweite
     1 wenn zweite zahl kleinerals erste
     0 sonst (gleich)
*/

int compare(int a, int b) {
    
    if (a < b) 
        return -1;

    else if (a > b) 
        return 1;

    return 0;
}

void main() {
    
    int z1, z2, out;

    printf("Gebe zwei Kommaseperierte Zahlen ein (Bsp. 5, 8):\n");
    scanf("%d, %d", &z1, &z2);

    out = compare(z1, z2);

    switch (out)
    {
    case -1:
        printf("Die 1. Zahl ist kleiner als die 2. Zahl.");
        break;
    
    case 1: 
        printf("Die 2. Zahl ist kleiner als die 1. Zahl.");
        break;

    case 0:
        printf("Beide Zahlen sind gleich gross.");
        break;
    }
}