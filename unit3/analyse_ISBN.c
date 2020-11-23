#include <stdio.h>

int main(void)
{
  int GS1Prefix;
  int groupIdentifier;
  int publishCode;
  int itemNumber;
  int checkDigit;
  printf("Enter ISBN:");
  scanf("%d-%d-%d-%d-%d", &GS1Prefix, &groupIdentifier, &publishCode, &itemNumber, &checkDigit);

  printf("GS1 prefix:%d\n", GS1Prefix);
  printf("Group indetifier:%d\n", groupIdentifier);
  printf("Publish code:%d\n", publishCode);
  printf("Item number:%d\n", itemNumber);
  printf("Check digit:%d\n", checkDigit);
}