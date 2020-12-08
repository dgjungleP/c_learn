#include <stdio.h>

int main()
{
  long long upcInt;
  printf("Enter the first l1 digits of a UFC:");
  scanf("%lld", &upcInt);
  int sum = 0;
  int check = upcInt % 10;
  upcInt = upcInt / 10;
  for (int i = 0; i < 11; i++)
  {
    sum = sum + (i % 2 == 0 ? 3 : 1) * (upcInt % 10);
    upcInt = upcInt / 10;
  }
  printf((9 - ((sum - 1) % 10)) == check ? "VALID" : "NOT VALID");
}
