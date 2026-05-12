#include <stdio.h>

int minimum(float arr[]) {

    int smallest = 0;
    
    for (int i = 1; i<5; i++) {
        if (arr[smallest] > arr[i]) {
            smallest = i;
        }
    }

    return smallest;
}

int maximum(float arr[]) {

    int biggest = 0;

    for (int i = 1; i<5; i++) {
        if (arr[biggest] < arr[i]) {
            biggest = i;
        }
    }   

    return biggest;
}

float summanize(float arr[]) {
    float sum;
    
    for (int i = 0; i<5; i++) {
        sum += arr[i];
    }

    return sum;
}

float mean(float arr[]) {
    float sum = summanize(arr);
    int size = 5;

    return sum / size;

}

int main() {

    float nums[] = {};
    float x;

    printf("Gebe 5 beliebige Gleitkommazahlen ein (Zahl + Enter):\n");

    for (int i = 0; i<5; i++) {
        scanf("%f", &x);
        nums[i] = x;
    }

    for (int i = 0; i<5; i++) {
        printf("\n%f", nums[i]);
    }

    printf("%f", summanize(nums));
    printf("%f", minimum(nums));
    printf("%f", maximum(nums));
    printf("%f", mean(nums));

    return 0;
}

