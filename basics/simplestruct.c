#include <stdio.h>

int main(void)
{
  int length, width;
  long area;

  struct coord {
    int x;
    int y;
  } myPoint;

  myPoint.x = 12;
  myPoint.y = 14;

  printf("\nThe coordinates are (%d, %d).\n", myPoint.x, myPoint.y);

  return 0;
}
