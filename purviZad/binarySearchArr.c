#include <stdio.h>

int findex (int *arr, int arrlen, int x) {
    int l = 0, r = arrlen - 1 ;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (x == arr[mid]) {
            return mid;
        }
        if (x > arr[mid]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return -1;
}


int main () {
    int arr[] = {1, 2, 5, 7, 8, 10};
    int arrlen = 6;
    int res = 0;
    int x = 11;

    res = findex(arr, arrlen, x);

    printf("\nThe index is %d", res);

    return 0;
}