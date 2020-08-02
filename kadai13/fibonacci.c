#include <stdio.h>
#include <stdlib.h>

int fibonacci(const int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    int fib = 0;
    fib += fibonacci(n - 1) + fibonacci(n - 2);
    return fib;
  }
}

int main(const int argc, const char *argv[]) {
  if (argc != 2) {
    exit(1);
  }
  int inputNum = atoi(argv[1]);
  int result = fibonacci(inputNum - 1) + fibonacci(inputNum - 2);
  printf("%dのフィボナッチ数は%dです", inputNum, result);
}
