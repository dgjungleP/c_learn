#include <stdio.h>

int main(void)
{
  int input;
  printf("Enter a two-digit number:");
  scanf("%d", &input);
  int result = 0;
  while (input != 0)
  {
    result = result*10+input % 10;
    input = input / 10;
  }
  printf("The reversal is :%d", result);
}