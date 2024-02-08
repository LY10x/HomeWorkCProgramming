#include <stdio.h>
#include <stdlib.h>

#define SWAP(A, B, TYPE)  { \
    TYPE temp = A; \
    A = B; \
    B = temp; \
} 

int main()
{
    int a = 5;
    int b = 3;

    SWAP(a,b,int);
    printf("a=%d\nb=%d\n", a,b);
    return 0;
}
