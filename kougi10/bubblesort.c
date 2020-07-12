#include <stdio.h>

int main(void) {
  int A[] = {5, 2, 10, 1};
  unsigned int arrayLength = sizeof(A) / sizeof(int);
  int i, j, buf;

  for (i = arrayLength - 1; i >= 1; i--) {
    for (j = 0; j < i; j++) {
      if (A[j] > A[j + 1]) {
        buf = A[j];
        A[j] = A[j + 1];
        A[j + 1] = buf;
      }
    }
  }
  for (i = 0; i < arrayLength; i++) {
    printf("A[%d] = %d\n", i, A[i]);
  }
}
