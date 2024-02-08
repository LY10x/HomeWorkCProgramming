#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        report_error("Usage: safedivide <num1> <num2>");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num2 == 0) {
        report_error("Division by zero");
        return 1;
    }

    int result = num1 / num2;
    printf("Quotient: %d\n", result);

    return 0;
}
