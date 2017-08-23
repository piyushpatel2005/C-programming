#include <stdio.h>

int main(void)
{
  char filename[20];

  printf("Enter the filename to delete: ");
  scanf("%s", filename);

  if(remove(filename) == 0)
    printf("The file %s has been deleted.\n", filename);
  else
    fprintf(stderr, "Error deleting the file %s.\n", filename);
}
