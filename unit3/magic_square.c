#include <stdio.h>

int main(void)
{
  int number1;
  int number2;
  int number3;
  int number4;
  int number5;
  int number6;
  int number7;
  int number8;
  int number9;
  int number10;
  int number11;
  int number12;
  int number13;
  int number14;
  int number15;
  int number16;
  printf("Enter the numbers from 1 to 16 in any order:");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &number1, &number2, &number3, &number4,
        &number5, &number6, &number7, &number8, &number9, &number10, &number11, &number12, &number13, &number14, &number15, &number16);

  printf("%d\t%d\t%d\t%d\n", number1, number2, number3, number4);
  printf("%d\t%d\t%d\t%d\n", number5, number6, number7, number8);
  printf("%d\t%d\t%d\t%d\n", number9, number10, number11, number12);
  printf("%d\t%d\t%d\t%d\n", number13, number14, number15, number16);

  printf("Row sums: %d %d %d %d\n", number1 + number2 + number3 + number4, number5 + number6 + number7 + number8, number9 + number10 + number11 + number12, number13 + number14 + number15 + number16);
  printf("Colum sums: %d %d %d %d\n", number1 + number5 + number9 + number13, number2 + number6 + number10 + number14, number3 + number7 + number11 + number15, number4 + number8 + number12 + number16);
  printf("Row sums: %d %d", number1 + number6 + number11 + number16, number13 + number10 + number7 + number4);
}