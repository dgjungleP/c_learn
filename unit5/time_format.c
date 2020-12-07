#include <stdio.h>

int main()
{
  int hour, minute;
  printf("Enter a 24-hour time:");
  scanf(" %d:%d", &hour, &minute);

  printf("Equivalent 12-hour time:%2d:%2d %s", hour >= 12 ? hour - 12 : hour, minute, hour >= 12 ? "PM" : "");
}