#include <stdio.h>

int ctr;
short array_s[10];
float array_f[10];
double array_d[10];

int main(void)
{
  printf("\t\tShort\t\tFloat\t\tDouble");
  printf("\n=========================================================");

  for(ctr = 0; ctr < 10; ctr++)
  {
    printf("\nElement %d:\t%p\t%p\t%p", ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);
  }
  printf("\n==========================================================\n");
  return 0;
}
