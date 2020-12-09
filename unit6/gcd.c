#include <stdio.h>

int main()
{
  int number1, number2;

  printf("Enter two integers:");
  scanf("%d %d", &number1, &number2);
  while (number1 != 0)
  {
    int temp = number2 %number1;
    number2 = number1;
    number1 = temp;
  }
  printf("Greatest common divisor:%d",number2) ;
}