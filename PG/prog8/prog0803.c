#include <stdio.h>

int main(void) {
  double length, width, height, surface, volume;

  printf("長さ(cm)を入力してください。¥n");
  scanf("%lf", &length);
  printf("幅(cm)を入力してください。¥n");
  scanf("%lf", &width);
  printf("高さ(cm)を入力してください。¥n");
  scanf("%lf", &height);

  surface = (length * width + width * height + height * length) * 2.0;
  volume = length * width * height;

  printf("長さ：%6.2fcm、幅：%6.2fcm、高さ：%6.2fcm の直方体の表面積は%6.2fcm2 "
         "です。¥n",
         length, width, height, surface);
  printf("長さ：%6.2fcm、幅：%6.2fcm、高さ：%6.2fcm の直方体の体積は%6.2fcm3 "
         "です。¥n",
         length, width, height, volume);

  return 0;
}
