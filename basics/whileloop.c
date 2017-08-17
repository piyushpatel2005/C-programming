#include <stdio.h>
#define MAXCOUNT 20

int count;

int main(void)
{
  count = 1;

  while(count <= MAXCOUNT)
  {
    printf("%d\n", count);
    count++;
  }
  return 0;
}
