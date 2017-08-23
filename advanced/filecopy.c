#include <stdio.h>

int file_copy(char *oldname, char *newname);


int main(void)
{
  char source[20], destination[20];

  printf("\nEnter source file: ");
  scanf("%s", source);
  printf("\nEnter destination file: ");
  scanf("%s", destination);

  if(file_copy(source, destination) == 0)
    puts("Copy operation successful!");
  else
    fprintf(stderr, "Error occured during copy operation.");
  return 0;
}

int file_copy(char *oldname, char *newname)
{
  FILE *fold, *fnew;
  int c;

  if((fold = fopen(oldname, "rb")) == NULL)
    return -1;

  if((fnew = fopen(newname, "rw")) == NULL)
  {
    fclose(fold);
    return -1;
  }

  while(1)
  {
    c = fgetc(fold);

    if(!feof(fold))
      fputc(c, fnew);
    else
      break;
  }
  fclose(fnew);
  fclose(fold);

  return 0;
}
