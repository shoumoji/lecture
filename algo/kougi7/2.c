#include <stdio.h>

int main(void) {
  int i, buf, N;

  //任意の整数Nを入力
  printf("Nの値を入力してください:");
  scanf("%d", &N);

  int A[N - 1];

  for (i = 0; i < N; i++) {
    A[i] = i + 1;
  }
  switch (N % 2) {
    case 0:
      for (i = 0; i < N / 2; i++) {
        buf = A[i];
        A[i] = A[N - 1 - i];
        A[N - 1 - i] = buf;
      }
      break;

    case 1:
      for (i = 0; i < (N - 1) / 2; i++) {
        buf = A[i];
        A[i] = A[N - 1 - i];
        A[N - 1 - i] = buf;
      }
      break;
  }
  for (i = 0; i < N; i++) {
    printf("A[%d] = %d\n", i, A[i]);
  }
  return 0;
}
