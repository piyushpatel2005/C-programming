#include <stdio.h>

int main(void)
{
  int count, id_num;
  char lname[257], fname[257];

  puts("Enter last name, first name and ID number separated by spaces");

  count = scanf("%s%s%d", lname, fname, &id_num);

  printf("%d items entered: %s, %s %d\n", count, lname, fname, id_num);
  return 0;
}
