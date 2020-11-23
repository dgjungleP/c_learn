#include <stdio.h>

int main(void)
{

  int pre;
  int mid;
  int tail;

  printf("Enter phone number [(xxx) xxx-xxxx]:");
  scanf(" (%d) %d-%d", &pre, &mid, &tail);

  printf("You entered %3.3d.%3.3d.%4.4d", pre, mid, tail);
}