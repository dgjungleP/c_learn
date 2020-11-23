#include <stdio.h>

int main(void)
{
  int itemNumber;
  float price;
  int year;
  int month;
  int day;

  printf("Enter  item number: ");
  scanf("%d", &itemNumber);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter a data (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t\t%d/%.2d/%d", itemNumber, price, month, day, year);
}