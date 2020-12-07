#include <stdio.h>

int main()
{
  long long upcInt;
  printf("Enter the first l1 digits of a EAN:");
  scanf("%lld", &upcInt);
  int sum = 0;
  for (int i = 0; i < 12; i++)
  {
    sum = sum + (i % 2 == 0 ? 3 : 1) * (upcInt % 10);
    upcInt = upcInt / 10;
  }
  printf("Check digit :%d", 9 - ((sum - 1) % 10));
}
