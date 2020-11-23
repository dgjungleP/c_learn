#include <stdio.h>

int main(void)
{
  printf("%-8.1f\n", 123.0);
  printf("%10.6f\n", 123.12);
  printf("%-8.3g\n", 123.10);
  printf("%6g\n", 123.0);
}