#include <stdio.h>

char input[257];

int main(void)
{
  puts("Enter some text: ");
  gets(input);
  printf("You entered: %s\n", input);

  return 0;
}
