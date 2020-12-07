#include <stdio.h>

int main()
{
  int number;
  printf("Enter a number:");
  scanf("%d", &number);
  int count = 0;
  int temp = number;
  while (temp > 0)
  {
    count++;
    temp = temp / 10;
  }
  printf("The number %d has %d digits", number, count);
}