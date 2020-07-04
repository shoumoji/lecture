#include <stdio.h>

int main(void) {
  //ソートする配列。個数、値ともにランダム
  int a[] = {4, 42, 41, 88, 54, 23, 53, 78, 723, 3443, 63, 59, 41, 17};
  int buf;

  unsigned int arraySize = sizeof(a) / sizeof(a[0]);

  // iは挿入する配列のための変数
  // jは比較する配列のための変数
  int i, j, k;

  // a[0]は挿入しないので、a[1]から挿入の可否を調べる
  for (i = 1; i < arraySize; i++) {
    // a[i]より左の数値と比較していく
    for (j = 0; j < i; j++) {
      if (a[i] < a[j]) {
        buf = a[i];
        // a[j]からa[i]までの配列を右に１つ全てずらす
        for (k = i; k > j; k--) {
          a[k] = a[k - 1];
        }
        // ずらし終わったら、元のa[i]の値をa[j]に挿入
        a[j] = buf;
        break;  //挿入したら、a[i]の挿入場所はそれ以降調べない
      }
    }
  }
  //出力部分
  for (int l = 0; l < arraySize; l++) {
    printf("a[%d]=%d\n", l, a[l]);
  }
}
