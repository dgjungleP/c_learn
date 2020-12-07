#include <stdio.h>

int main()
{
  int upcInt;
  printf("Enter the first l1 digits of a UFC:");
  scanf("%d", &upcInt);
  int sum = 0;
  for (int i = 0; i < 11; i++)
  {
    sum = sum + (i % 2 == 0 ? 3 : 1) * (upcInt % 10);
    upcInt = upcInt / 10;
  }
  printf("Check digit :%d", 9 - ((sum - 1) % 10));
}
