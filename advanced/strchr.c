#include <stdio.h>
#include <string.h>

int main(void)
{
  char *loc, buf[80];
  int ch;

  printf("Enter the string to be searched: ");
  scanf("%s", buf);
  printf("Enter the character to be searched: ");
  ch = (int)getchar();

  loc = strchr(buf, ch);

  if(loc == NULL)
    printf("The character %c was not found in %s\n", ch, buf);
  else
    printf("The character %c was found at position %d\n", ch, loc - buf);

  return 0;
}
