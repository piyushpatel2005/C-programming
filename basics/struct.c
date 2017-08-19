#include <stdio.h>

int main(void)
{
  int length, width;
  long area;

  struct coord {
    int x;
    int y;
  };

  struct rectangle {
    struct coord topleft;
    struct coord bottomright;
  } mybox;

  printf("\nEnter the top left x coordinate: ");
  scanf("%d", &mybox.topleft.x);

  printf("\nEnter the top left y coordinate: ");
  scanf("%d", &mybox.topleft.y);

  printf("\nEnter the bottom right x coordinate: ");
  scanf("%d", &mybox.bottomright.x);

  printf("\nEnter the bottom right y coordinate: ");
  scanf("%d", &mybox.bottomright.y);

  width = mybox.bottomright.x - mybox.topleft.x;
  length = mybox.topleft.y - mybox.bottomright.y;

  area = width * length;
  printf("\nThe area is %ld units.\n", area);

  return 0;
}
