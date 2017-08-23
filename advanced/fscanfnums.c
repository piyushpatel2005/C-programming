#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float f1, f2, f3, f4, f5;
  FILE *fp;

  if((fp = fopen("numberinput.txt", "r")) == NULL)
  {
    fprintf(stderr, "Error opening file.\n");
    exit(1);
  }
  fscanf(fp, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);
  printf("The values are %f %f %f %f and %f\n", f1, f2, f3, f4, f5);
  fclose(fp);
  return 0;
}
