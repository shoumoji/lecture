#include <stdio.h>

void outArrayTrace(void);

//ソートする配列。個数、値ともにランダム
int A[] = {5, 2, 10, 3};

int count = 0;
unsigned int arraySize = sizeof(A) / sizeof(A[0]);

int main(void) {
  int buf;

  // iは挿入する配列のための変数
  // jは比較する配列のための変数
  int i, j, k;

  outArrayTrace();

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

        // トレースを出力
        count++;
        outArrayTrace();

        break;  //挿入したら、A[i]の挿入場所はそれ以降調べない
      }
    }
  }
}

void outArrayTrace(void) {
  int l;
  FILE *file;

  // １回目は特殊な１行目と初期配列の出力
  if (count == 0) {
    file = fopen("trace.csv", "w");
    for (l = 0; l < arraySize; l++) {
      fprintf(file, ",A[%d]", l);
    }
    fprintf(file, "\n初期配列");
    for (l = 0; l < arraySize; l++) {
      fprintf(file, ",%d", A[l]);
    }
    fclose(file);
  }
  // 2回目以降はファイルに１行ずつ追記
  else {
    file = fopen("trace.csv", "a");
    fprintf(file, "\n%d回目", count);
    for (l = 0; l < arraySize; l++) {
      fprintf(file, ",%d", A[l]);
    }
    fclose(file);
  }
}

