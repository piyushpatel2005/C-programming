#include <stdio.h>

#define LAPS_PER_MILE 4

const int CURRENT_YEAR = 2017;

float miles_covered;
int laps_run, year_of_birth, current_age;

int main(void)
{
  printf("How many laps did you run? " );
  scanf("%d", &laps_run);
  printf("Enter your year of birth: ");
  scanf("%d", &year_of_birth);

  miles_covered = (float) laps_run / LAPS_PER_MILE;
  current_age = CURRENT_YEAR - year_of_birth;

  printf("\nYou ran %.2f miles.", miles_covered);
  printf("\nIt's not bad for someone turning %d this year.\n", current_age);
  return 0;
}
