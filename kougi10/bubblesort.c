#include <stdio.h>

int count;
int A[] = {5, 2, 10, 1};
unsigned int arrayLength = sizeof(A) / sizeof(int);

void outArrayTrace(void);

int main(void) {
  int i, j, buf;

  outArrayTrace();

  for (i = arrayLength - 1; i >= 1; i--) {
    for (j = 0; j < i; j++) {
      if (A[j] > A[j + 1]) {
        buf = A[j];
        A[j] = A[j + 1];
        A[j + 1] = buf;

        count++;
        outArrayTrace();
      }
    }
  }
  for (i = 0; i < arrayLength; i++) {
    printf("A[%d] = %d\n", i, A[i]);
  }
}

void outArrayTrace() {
  int l;
  FILE *file;

  // １回目は特殊な１行目と初期配列の出力
  if (count == 0) {
    file = fopen("trace.csv", "w");
    for (l = 0; l < arrayLength; l++) {
      fprintf(file, ",A[%d]", l);
    }
    fprintf(file, "\n初期配列");
    for (l = 0; l < arrayLength; l++) {
      fprintf(file, ",%d", A[l]);
    }
    fclose(file);
  }
  // 2回目以降はファイルに１行ずつ追記
  else {
    file = fopen("trace.csv", "a");
    fprintf(file, "\n%d回目", count);
    for (l = 0; l < arrayLength; l++) {
      fprintf(file, ",%d", A[l]);
    }
    fclose(file);
  }
}
