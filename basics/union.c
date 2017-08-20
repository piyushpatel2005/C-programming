#include <stdio.h>

int main(void)
{
  union shared_tag {
    char c;
    int i;
    long l;
    float f;
    double d;
  } shared;

  shared.c = '$';

  printf("\nchar c = %c", shared.c);
  printf("\nint i = %d", shared.i);
  printf("\nlong l = %ld", shared.l);
  printf("\nfloat f = %f", shared.f);
  printf("\ndouble d = %f", shared.d);

  printf("Changing the value of shared.d\n");
  shared.d = 12345677.8765;

  printf("\nchar c = %c", shared.c);
  printf("\nint i = %d", shared.i);
  printf("\nlong l = %ld", shared.l);
  printf("\nfloat f = %f", shared.f);
  printf("\ndouble d = %f", shared.d);
}
