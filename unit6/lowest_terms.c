#include <stdio.h>

int getDivisor(int, int);
int main()
{
  int number1, number2;

  printf("Enter two integers:");
  scanf("%d/%d", &number1, &number2);
  int divisor = getDivisor(number1, number2);
  printf("Greatest common divisor:%d/%d", number1 / divisor, number2 / divisor);
}
int getDivisor(int number1, int number2)
{
  while (number1 != 0)
  {
    int temp = number2 % number1;
    number2 = number1;
    number1 = temp;
  }
  return number2;
}