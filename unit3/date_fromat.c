#include <stdio.h>

int main(void)
{
  int year;
  int month;
  int day;
  printf("Enter a data (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You enterd the data %d%.2d%d", year, month, day);
}