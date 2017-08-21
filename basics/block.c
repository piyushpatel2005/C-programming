#include <stdio.h>

int main(void)
{
  int count = 0;
  printf("\nOutside the block, the count variable is %d\n", count);
  {
    int count = 999;
    printf("\nWithin the block, the count variable is %d\n", count);
  }
  printf("\nWhen again outside, count = %d\n", count);
  return 0;
}
