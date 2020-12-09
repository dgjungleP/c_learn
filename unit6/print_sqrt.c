#include <stdio.h>

int main()
{
  int max;
  printf("Enter a number:");
  scanf("%d", &max);
  int sqrt = 1;
  while (sqrt * sqrt * 4 <= max)
  {
    printf("%d\n", sqrt * sqrt * 4);
    sqrt++;
  }
}