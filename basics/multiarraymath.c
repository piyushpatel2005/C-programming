#include <stdio.h>

int multi[2][4];

int main(void)
{
  printf("\nThe value of (multi) = %p", multi);
  printf("\nThe value of (multi + 1) = %p", (multi + 1));
  printf("\nThe address of multi[1] = %p\n", &multi[1]);

  return 0;
}
