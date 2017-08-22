#include <stdio.h>

double square(double x);

double (*ptr)(double x);

int main(void)
{
  ptr = square;

  printf("%f %f\n", square(6.6), ptr(6.6));
  return 0;
}

double square(double x)
{
  return x * x;
}
