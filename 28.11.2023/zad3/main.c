// main.c
#include <stdio.h>
#include "transformation.h"

int main() {
    const char *input = "12ab23";


    Transformation result = transformStringToNumber(input);

    if (result.error[0] != '\0')
    {
        printf("Input: %s\nResult: %ld, Error: Invalid input\n", input, result.result);
    }
    else{
    printf("Input: %s\nResult: %ld, Error: \n", input, result.result);
    }

    return 0;
}
