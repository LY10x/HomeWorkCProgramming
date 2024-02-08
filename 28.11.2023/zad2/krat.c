#include <stdio.h>
int find_NOD(int x, int y) {
    int temp;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int find_NOK(int a, int b) {
    return (a * b) / find_NOD(a, b);
}

int main(void)
{
    int a = 12, b = 18, c;
    c = find_NOK(a,b);
    printf("\n%d",c);
    return 0;
}