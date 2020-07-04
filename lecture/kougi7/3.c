#include <stdio.h>

int main(void) {
  int N, n;
  int fact = 1;

  //任意の整数Nを入力
  printf("Nの値を入力してください:");
  scanf("%d", &N);

  n = N;  // Nの入力値を保存

  while (N > 1) {
    fact *= N;
    N--;
  }
  printf("%d!=%d", n, fact);
}
