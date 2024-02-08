#include <stdio.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50) {
        printf("Maximum length of each string should not exceed 50 characters.\n");
        return 1;
    }

    char str1[100]; 
    strcpy(str1, argv[1]);

    strconcat(str1, argv[2]);
    printf("%s\n", str1);

    return 0;
}
