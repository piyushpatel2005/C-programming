#include <stdio.h>
#define SIZE 5

char *message[SIZE] = {"This ", "is ", "a ", "short ", "message."};

int main(void)
{
  int x;

  for(x = 0; x < SIZE; x++)
    puts(message[x]);

  puts("And this is the end:");
  return 0;
}
