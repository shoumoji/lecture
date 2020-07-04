#include <stdio.h>

int main(void) {
  int A[9][9];

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      A[i][j] = (9 - i) * (9 - j);
      printf("A[%d][%d] = %2d, ", i, j, A[i][j]);
    }
    printf("\n");
  }
  return 0;
}
