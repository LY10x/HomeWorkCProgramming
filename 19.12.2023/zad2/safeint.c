#include <limits.h>
#include <stdio.h>
#include "safeint.h"

SafeResult safeadd(int a, int b) {
    SafeResult result;
    result.value = a + b;

    if ((b > 0 && result.value < a) || (b < 0 && result.value > a)) {
        result.errorflag = 1;
    } else {
        result.errorflag = 0;
    }

    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result;
    result.value = a - b;

   
    if ((b > 0 && result.value > a) || (b < 0 && result.value < a)) {
        result.errorflag = 1;
    } else {
        result.errorflag = 0;
    }

    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result;
    result.value = a * b;

 
    if ((a > 0 && b > 0 && result.value < 0) || (a < 0 && b < 0 && result.value < 0) ||
        (a > 0 && b < 0 && result.value > 0) || (a < 0 && b > 0 && result.value > 0)) {
        result.errorflag = 1;
    } else {
        result.errorflag = 0;
    }

    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result;
    if (b == 0) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.value = a / b;
        result.errorflag = 0;
    }

    return result;
}

SafeResult safestrtoint(const char *str) {
    SafeResult result;
    int value = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            SafeResult temp = safemultiply(value, 10);
            temp = safeadd(temp.value, sign * (str[i] - '0'));

            if (temp.errorflag == 1) {
                result.errorflag = 1;
                result.value = 0;
                return result;
            }

            value = temp.value;
        } else {
            result.errorflag = 1;
            result.value = 0;
            return result;
        }
    }

    result.value = value;
    result.errorflag = 0;
    return result;
}
int main() {
    char a[] = {"21s5742"};
    
    SafeResult result = safestrtoint(a);
    if (result.errorflag == 1) {
        printf("Error: Overflow occurred during opperation.\n");
    } else {
        printf("opperation result: %d\n", result.value);
    }

    return 0;
}