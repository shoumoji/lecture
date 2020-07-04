#include <stdio.h>

int main(void) {
  /* 画像配列を宣言(本来は画像データとして与えられている配列) */
  unsigned char image[3][512][512];
  /* ループ用の変数を宣言 */
  int i, j, k;

  for (i = 0; i < 3; i++) {        // RGBの3回分のループ
    for (j = 0; j < 512; j++) {    // 行の512回のループ
      for (k = 0; k < 512; k++) {  // 列の512回のループ
        if (image[i][j][k] <= 235) {
          image[i][j][k] += 20;
        } else {
          image[i][j][k] = 255;  // 256以上はないので、255まで
        }
      }
    }
  }

  return 0;
}
