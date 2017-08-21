#include <stdio.h>

int multi[2][4];

int main(void)
{
  printf("\nThe size of multi = %ld", sizeof(multi));
  printf("\nThe size of multi[0] = %ld", sizeof(multi[0]));
  printf("\nThe size of multi[0][0] = %ld\n", sizeof(multi[0][0]));

  return 0;
}
