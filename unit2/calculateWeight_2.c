#include <stdio.h>

int main(void)
{
  int height=8, width=10, length=12, volume;
  volume = height * width * length;
  printf("Dimensions: %dx%dx%d\n", height, width, length);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensions weight(pounds): %d\n", (volume + 165) / 166);
  return 0;
}