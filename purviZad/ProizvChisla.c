#include <stdio.h> 

int multi (int n) {
    int Sum = 1;

    while (n != 0) {
        Sum = Sum * (n % 10);
        n /= 10;
    }

    return Sum;
}

int main () {
    int n, result = 0;

    do {
        printf("\nn = ");
        scanf("%d", &n);
    } while (n < 1);

    result = multi(n);

    printf("\n%d", result);

    return 0;
}
