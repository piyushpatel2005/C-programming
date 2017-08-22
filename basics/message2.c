#include <stdio.h>

void print_strings(char *p[], int n);

int main(void)
{
  char *message[4] = {"Four", "Five", "Six", "Seven"};
  print_strings(message, 4);
  return 0;
}

void print_strings(char *p[], int n)
{
  int count;

  for(count = 0; count < n; count++)
    printf("%s ", p[count]);
  printf("\n");
}
