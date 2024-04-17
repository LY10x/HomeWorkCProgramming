#include <stdio.h>

union MyUnion {
    long odd;
    short even;
};

int main() {
    union MyUnion arr[10];

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            arr[i].even = i;
        } else {
            arr[i].odd = i;
        }
    }

    printf("even: ");
    for (int i = 0; i < 10; i += 2) {
        printf("%hd ", arr[i].even);
    }
    printf("\n");

    printf("odd: ");
    for (int i = 1; i < 10; i += 2) {
        printf("%ld ", arr[i].odd);
    }
    printf("\n");

    return 0;
}