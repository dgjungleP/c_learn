#include <stdio.h>

int main()
{
  float integer = 1;
  float max = -1;
  while (integer > 0)
  {
    printf("Enter a number:");
    scanf("%f", &integer);
    max = max < integer ? integer : max;
  }
  printf("The largest bynver entered was %0.2f", max);
}