#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int A[] = {
    1, 3, 5, 7, 8, 9,
};
unsigned int Alength = sizeof(A) / sizeof(int);

int main(void) {
  bool found = false;
  int lo = 0;
  int hi = Alength;
  int TARGET = 1;

  while (lo < hi) {
    // hi-loの結果を四捨五入
    int k = ((float)(hi) + (float)lo) / 2;

    printf("k = %d, A[k] = %d, found = %d, hi = %d, lo = %d\n", k, A[k], found,
           hi, lo);

    if (A[k] == TARGET) {
      found = true;
      printf("k = %d, A[k] = %d, found = %d, hi = %d, lo = %d\n", k, A[k],
             found, hi, lo);
      printf("TARGETが存在します");
      exit(0);
    } else if (A[k] > TARGET) {
      hi = k--;
    } else {
      lo = k++;
    }
  }
  printf("TARGETは存在しませんでした");
  exit(0);
}
