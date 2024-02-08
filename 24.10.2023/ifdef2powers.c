#include <stdio.h>

#define ARRAY_SIZE 7


#if defined(ARRAY_SIZE) && (ARRAY_SIZE >= 1) && (ARRAY_SIZE <= 10)

int main() {
    int array[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        array[i] = 1 << i;
    }

    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        printf("%d\n", array[i]);
    }

    return 0;
}

#else
int main() {
    printf("The array size is not valid or not defined.\n");
    return 1;
}
#endif
