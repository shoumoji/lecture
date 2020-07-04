#include <stdio.h>

int main(void) {
  int i, N;

  //任意の整数Nを入力
  printf("Nの値を入力してください:");
  scanf("%d", &N);

  int A[N - 1];  //問題1の配列を宣言(正順)

  for (i = 0; i < N; i++) {
    A[i] = i + 1;
  }

  for (i = 0; i < N; i++) {
    printf("A[%d] = %d\n", i, A[i]);
  }

  return 0;
}
