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

  printf("Balance remaininig after first payment:%.2f\n", amount = (amount - payment) * (1 + rate));
  printf("Balance remaininig after second payment:%.2f\n", amount = (amount - payment) * (1 + rate));
  printf("Balance remaininig after third payment:%.2f\n", amount = (amount - payment) * (1 + rate));
}