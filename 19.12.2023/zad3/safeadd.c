#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        report_error("Usage: safeadd <num1> <num2>");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0;
}
