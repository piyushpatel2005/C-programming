#include <stdio.h>

int main(void)
{
  char buffer[10], *c;

  tmpnam(buffer);

  c = tmpnam(NULL);

  printf("Temporary name 1: %s", buffer);
  printf("\nTemporary name 2: %s\n", c);

  return 0;
}
