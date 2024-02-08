#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        report_error("Usage: safemultiply <num1> <num2>");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int product = num1 * num2;
    printf("Product: %d\n", product);

    return 0;
}
