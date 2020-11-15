#include <stdio.h>

#define MAX(x, y) (x > y ? x : y)
#define ODD(n) (n % 2 == 1 ? n : 0)

int main(void) {
    int num1, num2, num3, num4, ans;
    int num, i, sum = 0;

    printf("1番目の整数を入力してください\n");
    scanf("%d", &num1);
    printf("2番目の整数を入力してください\n");
    scanf("%d", &num2);
    printf("3番目の整数を入力してください\n");
    scanf("%d", &num3);
    printf("4番目の整数を入力してください\n");
    scanf("%d", &num4);

    ans = MAX(MAX(num1, num2), MAX(num3, num4));
    printf("最大値は%dです。\n\n", ans);

    while (1) {
      printf("いくつまで奇数の和を計算しますか。(正の整数のみ)\n");
      scanf("%d", &num);
      if (num > 0) {
        break;
      }
    }

    for (i = 0; i <= num; i++) {
      sum += ODD(i);
    }

    printf("%dまでの奇数の和は%dです。", num, sum);
    return 0;
}