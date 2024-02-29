#include <stdio.h>

#define COLUMNS 4

void printTable(int *arr, int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%4d ", *((arr + i * COLUMNS) + j));
        }
        printf("\n");
    }
}

int main() {
    int arr[][COLUMNS] = {
        {69, 42, 3, 9},
        {72, 43, 67, 90},
        {21, 39, 37, 5}
    };
    int rows = sizeof(arr) / sizeof(arr[0]);

    printTable((int *)arr, rows);

    return 0;
}
