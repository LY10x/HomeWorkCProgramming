#include <stdio.h>

void swap(int *p1, int *p2){
    int g = *p1;
    *p1 = *p2;
    *p2 = g;
}

void srt(int *arr, int len)
{
    for (int j = 1; j < len; j++)
    {
        int change = 0;
        for (int k = 0; k < len - j; k++)
        {
            if (*(arr + k) > *(arr + k + 1))
            {
                change = 1;
                swap(arr + k, arr + k + 1);
            }
        }
        if (!change)
            break;
    }
}

int main()
{
    int arr[5] = {1, 7, -9, 8, 5};

    srt(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}