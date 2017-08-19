#include <stdio.h>

int main(void)
{
  struct entry {
    char fname[20];
    char lname[20];
    char phone[13];
  };

  struct entry list[4];

  int i;

  for(i = 0; i < 4; i++)
  {
    printf("\nEnter first name: ");
    scanf("%s", list[i].fname);

    printf("\nEnter last name: ");
    scanf("%s", list[i].lname);

    printf("\nEnter phone in 123-456-7890 format: ");
    scanf("%s", list[i].phone);
  }

  printf("\n\n");

  for(i = 0; i < 4; i++)
  {
    printf("Name: %s %s", list[i].fname, list[i].lname);
    printf("\t\tPhone: %s\n", list[i].phone);
  }
  return 0;
}
