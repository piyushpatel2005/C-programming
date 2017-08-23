#include <stdio.h>

int main(void)
{
  char oldname[20], newname[20];

  printf("Enter current filename: ");
  scanf("%s", oldname);
  printf("Enter new filename: ");
  scanf("%s", newname);

  if(rename (oldname, newname) == 0)
    printf("%s ahs been renamed to %s.\n", oldname, newname);
  else
    fprintf(stderr, "%s could not be renamed.\n", oldname);
  return 0;
}
