#include <stdio.h>

int main(void)
{

  printf("Enter a dollar amount:");
  int amount;
  scanf("%d", &amount);
  int count_20 = amount / 20;
  amount = amount % 20;
  int count_10 = amount / 10;
  amount = amount % 10;
  int count_5 = amount / 5;
  amount = amount % 5;
  int count_1 = amount;

  printf("$20 bills:%d\n", count_20);
  printf("$10 bills:%d\n", count_10);
  printf("$5 bills:%d\n", count_5);
  printf("$1 bills:%d", count_1);
}
