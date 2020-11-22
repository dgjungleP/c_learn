#include <stdio.h>

#define TAX 1.05f
int main(void)
{
  printf("Enter an amount:");
  float amount;
  scanf("%f", &amount);
  printf("With tax added:$%.2f", amount * TAX);
  return 0;
}