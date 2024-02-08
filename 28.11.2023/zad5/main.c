#include <stdio.h>
#include "maths.h"

int main() {
    int number = 7; 

    unsigned long long result = factorial(number);

    printf("Factorial of %d is: %llu\n", number, result);

    return 0;
}
