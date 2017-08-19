#include <stdio.h>
#include <stdlib.h>

char count, *ptr, *p;

int main(void)
{
  ptr = malloc(35 * sizeof(char));

  if(ptr == NULL)
  {
    puts("Memory allocation error.");
    return 1;
  }

  // p and ptr points to the same address
  p = ptr;
  for(count = 65; count < 91; count++)
    *p++ = count;

  *p = '\0';

  puts(ptr);
  free(ptr);

  return 0;
}
