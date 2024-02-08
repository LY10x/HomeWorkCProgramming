#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 7 

void raiseToFourthPower(long arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = pow(arr[i], 4);
    }
}

int main() {
    long numbers[ARRAY_SIZE] = {2, 3, 4, 5, 6 , 9, 1}; 

    raiseToFourthPower(numbers, ARRAY_SIZE);

    printf("Numbers raised to the fourth power:\n");
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("%ld\n", numbers[i]);
    }

    return 0;
}
