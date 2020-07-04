/* 2*2ピクセルをPIXELとする */
#define PIXEL                                                 \
  (image[i][j][k] + image[i][j][k + 1] + image[i][j + 1][k] + \
   image[i][j + 1][k + 1])

#include <stdio.h>

int main(void) {
  /* 画像配列を宣言(本来は画像データとして与えられている配列) */
  unsigned char image[3][512][512];
  /* ループ用の変数を宣言 */
  int i, j, k;
  /*平滑化処理用の平均値変数 */
  int avg;

  for (i = 0; i < 3; i++) {           // RGBの3回分のループ
    for (j = 0; j < 512; j += 2) {    // 行の512回のループ
      for (k = 0; k < 512; k += 2) {  // 列の512回のループ
        /* 4ピクセルの平均値をavgに入力 */
        avg = PIXEL / 4;
        /* 求めた平均値をそれぞれのピクセルに代入する */
        image[i][j][k] = avg;
        image[i][j][k + 1] = avg;
        image[i][j + 1][k] = avg;
        image[i][j + 1][k + 1] = avg;
      }
    }
  }
  return 0;
}

