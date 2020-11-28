#include <stdio.h>

int main(void)
{
  int input;
  printf("Enter a number between 0 and 32767:");
  scanf("%d", &input);
  int temp = 0;
  while (input != 0)
  {
    temp = temp * 10 + input % 8;
    input = input / 8;
  }
  int result = 0;
  while (temp != 0)
  {
    result = result *10 +temp % 10;
    temp = temp / 10;
  }
  printf("In octal, your number is:%-.5d", result);
}