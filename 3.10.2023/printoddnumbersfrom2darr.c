#include <stdio.h>

int main() {

  int arr[2][3] = {{1, 7, 3}, {5, 2, 8}};

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] % 2 == 1) {
        printf("%d ", arr[i][j]);
      }
    }
  }

  return 0;
}