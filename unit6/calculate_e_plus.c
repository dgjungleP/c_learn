#include <stdio.h>

int getFactorial(int);
int main()
{
  float e = 1;
  float min;
  printf("Enter the numebr to calculate e:");
  scanf("%f", &min);
  int count = 1;
  float epselon;
  while (1)
  {
    epselon = 1.0 / getFactorial(count++);
    if (epselon < min)
    {
      break;
    }
    e += epselon;
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