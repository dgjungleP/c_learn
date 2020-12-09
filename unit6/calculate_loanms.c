#include <stdio.h>

int main(void)
{
  float amount;
  float rate;
  float payment;

  printf("Enter amount of loan:");
  scanf("%f", &amount);
  printf("Enter interest rate:");
  scanf("%f", &rate);
  printf("Enter monthly payment:");
  scanf("%f", &payment);
  rate = rate / 100 / 12;
  int count = 1;
  while (amount > 0)
  {
    if (amount - payment > 0)
    {
      printf("Balance remaininig after %d payment:%.2f\n", count++, amount = (amount - payment) * (1 + rate));
    }
    else
    {
      printf("Balance remaininig after %d payment:%.2f\n", count++, amount = 0);
    }
  }
}