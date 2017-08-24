#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[80], str2[80];
  int x;

  while(1)
  {
    printf("\n\nInput the first string, a blank to exit.");
    scanf("%s", str1);

    if(strlen(str1) == 0)
      break;
    printf("\nInput the second string: ");
    scanf("%s", str2);

    x = strcmp(str1, str2);
    printf("\nstrcmp(%s, %s) returns %d\n", str1, str2, x);
  }
  return 0;
}
