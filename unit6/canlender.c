#include <stdio.h>

int main()
{
  int days;
  int offset;

  printf("Enter number of days in month:");
  scanf("%d", &days);
  printf("Enter starting day os the week (1=Sum,7=Sat):");
  scanf("%d", &offset);
  int count = 0;
  for (int i = offset-1; i > 0; i--)
  {
    printf("\t");
    count++;
  }
  for (int i = 1; i <= days; i++)
  {
    printf("%2d\t", i);
    count++;
    if (count % 7 == 0)
    {
      printf("\n");
      count = 0;
    }
  }
}