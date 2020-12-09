#include <stdio.h>

int getFactorial(int);
int main()
{
  float e = 1;
  int max;
  printf("Enter the numebr to calculate e:");
  scanf("%d", &max);
  for (int i = 1; i < max; i++)
  {
    e += 1.0 / getFactorial(i);
  }
  printf("e is like:%f", e);
}
int getFactorial(int max)
{
  int result = 1;

  for (int i = 1; i <= max; i++)
  {
    result *= i;
  }
  return result;
}