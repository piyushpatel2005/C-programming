#include <stdio.h>
#include <string.h>

int main(void)
{
  char buf1[80], buf2[80];
  size_t loc;

  printf("Enter the string to be searched: ");
  scanf("%s", buf1);
  printf("Enter the string containing target characters: ");
  scanf("%s", buf2);

  loc = strcspn(buf1, buf2);

  if(loc == strlen(buf1))
    printf("No match was found.");
  else
    printf("The first match was found at position %u\n", loc);

  return 0;
}
