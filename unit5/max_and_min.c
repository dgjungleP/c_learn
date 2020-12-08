#include <stdio.h>

int main()
{
  int value2, value3, value4;
  int max, min;
  printf("Enter four integers:");
  scanf("%d %d %d %d", &max, &value2, &value3, &value4);
  min = max;
  if (value2 > max)
  {
    max = value2;
  }
  else if (value2 < min)
  {
    min = value2;
  }
  if (value3 > max)
  {
    max = value3;
  }
  else if (value3 < min)
  {
    min = value3;
  }
  if (value4 > max)
  {
    max = value4;
  }
  else if (value4 < min)
  {
    min = value4;
  }
  printf("Largest:%d\n", max);
  printf("Smallest:%d\n", min);
}