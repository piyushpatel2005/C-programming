#include <stdio.h>

int x = 999;

void print_value(void);

int main(void)
{
  int y = 123;
  printf("%d\n", x);
  print_value();

  return 0;
}

void print_value(void)
{
  printf("%d\n", x);
  // printf("%d\n", y);   // This line gives an error if comments are removed.
}
