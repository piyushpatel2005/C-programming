#include <stdio.h>

int a, b;

int main(void)
{
  a = b = 0;

  // Post increment increments after printing on the console.
  printf("Count up\n");
  printf("Post   Pre\n");
  printf("%d      %d\n", a++, ++b);
  printf("%d      %d\n", a++, ++b);
  return 0;
}
