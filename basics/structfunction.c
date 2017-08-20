#include <stdio.h>

struct data {
  float amount;
  char fname[30];
  char lname[30];
} rec;

void print_rec(struct data displayRec);

int main(void)
{
  printf("Enter the person's first and last names,\
   separated by space: ");
   scanf("%s %s", rec.fname, rec.lname);

   printf("\nEnter the salary: ");
   scanf("%f", &rec.amount);

   print_rec(rec);
   return 0;
}

void print_rec(struct data displayRec)
{
  printf("\n Person %s %s has $%.2f salary.\n", \
          displayRec.fname, displayRec.lname, displayRec.amount);
}
