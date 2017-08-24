#include <stdio.h>
#include <string.h>

int main(void)
{
  char *loc, buf1[80], buf2[80];

  printf("Enter the string to be searched: ");
  scanf("%s", buf1);
  printf("Enter the target string: ");
  scanf("%s", buf2);

  loc = strstr(buf1, buf2);

  if(loc == NULL)
    printf("No match was found.");
  else
    printf("%s was found at position %d\n", buf2, loc - buf1);

  return 0;
}
