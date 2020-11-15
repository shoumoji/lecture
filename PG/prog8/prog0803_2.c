#include <stdio.h>

void output_print(double l, double w, double h);
double calc_surface(double l, double w, double h);
double calc_volume(double l, double w, double h);

int main(void) {
  double length, width, height, surface, volume;

  printf("長さ(cm)を入力してください。\n");
  scanf("%lf", &length);
  printf("幅(cm)を入力してください。\n");
  scanf("%lf", &width);
  printf("高さ(cm)を入力してください。\n");
  scanf("%lf", &height);

  output_print(length, width, height);
  printf("表面積は%6.2fcm2です。\n", calc_surface(length, width, height));

  output_print(length, width, height);
  printf("体積は%6.2fcm3です。\n", calc_volume(length, width, height));

  return 0;
}

void output_print(double l, double w, double h) {
  printf("長さ: %6.2fcm, 幅: %6.2fcm, 高さ: %6.2fcm の", l, w, h);
}

double calc_surface(double l, double w, double h) {
  double surface;
  surface = (l * w + w * h + h * l) * 2.0;
  return surface;
}

double calc_volume(double l, double w, double h) {
  double volume;
  volume = l * w * h;
  return volume;
}