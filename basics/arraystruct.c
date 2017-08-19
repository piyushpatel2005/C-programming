#include <stdio.h>

#define NAMESIZE 30

int main(void)
{
  struct data {
    float amount;
    char fname[NAMESIZE];
    char lname[NAMESIZE];
  } rec;

  printf("Enter the donor's first and last names.\n");
  printf("separated by a space. ");
  scanf("%s %s", rec.fname, rec.lname);

  printf("Enter the donation amount. ");
  scanf("%f", &rec.amount);

  printf("\nDonor %s %s gave $%.2f.\n", rec.fname, rec.lname, rec.amount);
  return 0;

}
