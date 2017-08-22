#include <stdio.h>

void func1(void (*p)(void));
void one(void);
void two(void);
void other (void);

int main(void)
{
  void (*ptr)(void);
  int number;

  for(;;) {
    puts("\nEnter an integer between 1 and 10, 0 to exit: ");
    scanf("%d", &number);

    if(number == 0)
      break;
    else if (number == 1)
      ptr = one;
    else if (number == 2)
      ptr = two;
    else
      ptr = other;
    func1(ptr);
  }
  return 0;
}

void func1(void (*p) (void))
{
  p();
}

void one(void)
{
  puts("You entered 1.");
}

void two(void)
{
  puts("You entered 2.");
}

void other(void)
{
  puts("You entered number other than 1 or 2.");
}
