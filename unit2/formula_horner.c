#include <stdio.h>

int main(void)
{
  printf("Enter a X for the formula 3x^5+2x^4-5x^3-x^2+7x-6:");
  int x;
  scanf("%d", &x);
  int result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("%d for the formula 3x^5+2x^4-5x^3-x^2+7x-6 is:%d", x, result);
  return 0;
}