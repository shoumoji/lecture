#define uint64t __uint64_t

#include <stdio.h>
#include <stdlib.h>

uint64t fibonacci(const int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    uint64t fib = 0;
    fib += fibonacci(n - 1) + fibonacci(n - 2);
    return fib;
  }
}

int main(const int argc, const char *argv[]) {
  if (argc != 2) {
    exit(1);
  }
  int inputNum = atoi(argv[1]);
  uint64t result = fibonacci(inputNum - 1) + fibonacci(inputNum - 2);
  printf("%dのフィボナッチ数は%luです", inputNum, result);
}
