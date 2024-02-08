#include "mystrings.h"
#include <stdio.h>
#include <string.h>

int strlength(const char *str) {
    return strlen(str);
}

void strconcat(char *str1, const char *str2) {
    strcat(str1, str2);
}

int strcompare(const char *str1, const char *str2) {
    int result = strcmp(str1, str2);
    if (result < 0) {
        return -1;
    } else if (result > 0) {
        return 1;
    } else {
        return 0;
    }
}
