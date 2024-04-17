#include <stdio.h>

typedef unsigned long long ull;
typedef ull (*func_ptr)(ull, ull);

ull reduce(ull* arr, ull n, func_ptr f, ull initial) {
    ull result = initial;
    for (int i = 0; i < n; i++) {
        result = f(result, arr[i]);
    }
    return result;
}

ull add(ull a, ull b) {
    return a + b;
}

int main() {
    ull arr[] = {1, 2, 3};
    ull n = 3;
    ull result = reduce(arr, n, add, 0);

    printf("Result of reduction is: %llu\n", result);

    return 0;
}