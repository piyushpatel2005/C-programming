#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
  FILE *fp;
  char filename[80];

  printf("Enter filename: ");
  scanf("%s", filename);

  if((fp = fopen(filename, "r")) == NULL)
  {
    perror("You made a mistake!");
    printf("errno = %d.\n", errno);
    exit(1);
  }
  else
  {
    puts("File opened for reading.");
    fclose(fp);
  }
  return 0;
}
