#include <stdio.h>
#include <stdio.h>

int is_prime(int num) {
    if (num < 2)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main(void) {
    int arr[] = {1, 7, 10, 15, 17, 13, 24, 73, 30};
    int num_elements = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < num_elements; i++) {
        if (is_prime(arr[i])) {
            sum += arr[i];
        }
    }

    printf("The sum of prime numbers in the array is: %d\n", sum);
    return 0;
}
