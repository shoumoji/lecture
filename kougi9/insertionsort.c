#include <stdio.h>

int main(void) {
  //ソートする配列。個数、値ともにランダム
  int A[] = {4, 42, 41, 88, 54, 23, 53, 78, 723, 3443, 63, 59, 41, 17};
  int buf;

  unsigned int arraySize = sizeof(A) / sizeof(A[0]);

  // iは挿入する配列のための変数
  // jは比較する配列のための変数
  int i, j, k;

  // A[0]は挿入しないので、A[1]から挿入の可否を調べる
  for (i = 1; i < arraySize; i++) {
    // A[i]より左の数値と比較していく
    for (j = 0; j < i; j++) {
      if (A[i] < A[j]) {
        buf = A[i];
        // A[j]からA[i]までの配列を右に１つ全てずらす
        for (k = i; k > j; k--) {
          A[k] = A[k - 1];
        }
        // ずらし終わったら、元のA[i]の値をA[j]に挿入
        A[j] = buf;
        break;  //挿入したら、A[i]の挿入場所はそれ以降調べない
      }
    }
  }
  //出力部分
  for (int l = 0; l < arraySize; l++) {
    printf("A[%d]=%d\n", l, A[l]);
  }
}
