#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1 = 100;
    int num2 = 95;

    printf("The bigger of %d and %d is: %d\n", num1, num2, MAX(num1, num2));

    return 0;
}
