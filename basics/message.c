#include <stdio.h>

int main(void)
{
  char *message[4] = {"Four", "Five", "Six", "Seven"};
  int count;

  for(count = 0; count < 4; count++)
    printf("%s ", message[count]);
  printf("\n");

  return 0;
}
