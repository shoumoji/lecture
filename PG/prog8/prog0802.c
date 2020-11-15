#include <stdio.h>

int count = 10;

int count_func(void) {
  count++;
  printf("count_func:%d\n", count);

  return 0;
}

void max_local(int n) {
  int max = 0;

  if (n > max) {
    max = n;
  }
  printf("max_local : max=%d\n", max);
}

void max_static(int n) {
  static int max = 0;

  if (n > max) {
    max = n;
  }
  printf("max_static : max=%d\n", max);
}

int main(void) {
  int count = 10;

  count++;
  printf("main:%d\n", count);
  count_func();
  count++;
  printf("main:%d\n", count);

  max_local(30);
  max_local(60);
  max_local(50);
  max_local(30);
  max_local(60);
  max_local(50);

  return 0;
}