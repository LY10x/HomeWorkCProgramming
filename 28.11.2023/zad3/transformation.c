#include "transformation.h"
#include <stdio.h>
#include <stdlib.h>

Transformation transformStringToNumber(const char *input) {
    Transformation tmp;
    long num = 0;
    int sign = 1;
    int i = 0;

    if (input[0] == '-') {
        sign = -1;
        i++;
    }

    int error_index = 0;
    for (; input[i] != '\0'; ++i) {
        if (input[i] < '0' || input[i] > '9') {
            tmp.result = 0;
            while (input[error_index] != '\0' && error_index < ERROR_MSG_SIZE - 1) {
                tmp.error[error_index] = input[error_index];
                error_index++;
            }
            tmp.error[error_index] = '\0';
            return tmp;
        }
        num = num * 10 + (input[i] - '0');
    }

    tmp.result = sign * num;
    tmp.error[0] = '\0'; // Empty string for error
    return tmp;
}
