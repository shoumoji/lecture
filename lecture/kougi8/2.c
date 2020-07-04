#include <stdio.h>

int main(void) {
  int A[9][9];

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j <= i; j++) {
      A[i][j] = j + 1;
      printf("A[%d][%d] = %d, ", i, j, A[i][j]);
    }
    printf("\n");
  }
  return 0;
}
