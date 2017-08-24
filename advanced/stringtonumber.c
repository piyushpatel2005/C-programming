#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char buf[80];
  double d;

  while(1)
  {
    printf("\nEnter the string to convert (blank to exit): ");
    scanf("%s", buf);

    if(strlen(buf) == 0)
      break;
    d = atof(buf);

    printf("The converted value is %f.\n", d);

  }
  return 0;
}
