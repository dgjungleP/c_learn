#include <stdio.h>
#define PI 1.0f / 3.14159f
#define PRE 4.0f / 3.0f * PI

int main(void)
{
  int radius = 10;
  printf("This cirlcle's volume is %f", PRE * radius * radius * radius);
  return 0;
}