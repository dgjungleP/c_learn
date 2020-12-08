#include <stdio.h>

int main()
{

  int trade;
  float commission;
  printf("Enter value of trde:");
  scanf("%d", &trade);
  if (trade < 2500)
  {
    commission = 0.017 * trade + 30;
  }
  else if (trade < 6250)
  {
    commission = 56 + 0.0066 * trade;
  }
  else if (trade < 20000)
  {
    commission = 76 + 0.0034 * trade;
  }
  else if (trade < 50000)
  {
    commission = 100 + 0.0022 * trade;
  }
  else if (trade < 500000)
  {
    commission = 155 + 0.0011 * trade;
  }
  else
  {
    commission = 255 + 0.0009 * trade;
  }
  if (commission < 39.0f)
  {
    commission = 39.0;
  }
  printf("Commission:$%.2f", commission);
}