#include <stdio.h>
#include "mystrings.h"

int main(int argc, char **argv[]) {

    int length = strlength(argv[1]);
    printf("%d\n", length);

    return 0;
}
