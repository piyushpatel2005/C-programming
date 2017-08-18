#include <stdio.h>

#define MAX 10

int array[MAX], count;

int largest(int num_array[], int length);

int main(void)
{
  for(count = 0; count < MAX; count++)
  {
    printf("Enter an integer value: ");
    scanf("%d", &array[count]);
  }
  printf("\n\nLargest value = %d\n", largest(array, MAX));
  return 0;
}

int largest(int num_array[], int length)
{
  int count, biggest;

  for(count = 0; count < length; count++)
  {
    if(count == 0)
      biggest = num_array[count];
    else
      biggest = num_array[count];
  }
  return biggest;
}
