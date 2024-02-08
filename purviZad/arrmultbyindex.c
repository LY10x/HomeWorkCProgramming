#include <stdio.h>
#include <stdlib.h>


void sort(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {   // loop n times - 1 per element
        for (j = 0; j < n - i - 1; j++) { // last i elements are sorted already
            if (a[j] > a[j + 1]) {  // swop if order is broken
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main(void)
{
    int arr[] = {1, 7, 3, 4, 9, 2};
    int arrlen = 6;
    int result = 0;
    sort(arr, arrlen);
    for(int i=0;i<arrlen;i++)
    {
    result = result + arr[i]*i;
    }
    printf("\nresult = %d", result);

    return 0;
}

