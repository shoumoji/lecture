#include <stdio.h>

int main(void) {
  int i, j, k;

  int A[] = {21, 65, 45, 76,
             54, 56, 71, 33};  //入力値は内容、個数ともにランダムに入力
  int B[sizeof(A) / sizeof(int)],
      C[sizeof(A) / sizeof(int)];  //配列Aと同じ大きさの配列B,Cを宣言

  j = 0;
  k = 0;

  for (i = 0; i < sizeof(A) / sizeof(int); i++) {
    if (A[i] % 2 == 0) {
      B[j] = A[i];
      j++;
    } else {
      C[k] = A[i];
      k++;
    }
  }

  for (i = 0; i < j; i++) {
    printf("B[%d]=%d\n", i, B[i]);
  }

  for (i = 0; i < k; i++) {
    printf("C[%d]=%d\n", i, C[i]);
  }
  return 0;
}
