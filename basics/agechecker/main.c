#include <stdio.h>
#include <stdlib.h>

#define CURRENTYEAR 2017

int birth_year, age;

int main()
{
    printf("Enter the year you were born: ");
    scanf("%d", &birth_year);

    if(birth_year % 4 == 0)
        printf("You were born in a leap year\n");
    else
        printf("You were not born in a leap year\n");

    age = CURRENTYEAR - birth_year;

    if(age > 18)
        printf("You can vote now.\n");
    else
        printf("It is illegal for you to drink alcohol.\n");

    return 0;
}
