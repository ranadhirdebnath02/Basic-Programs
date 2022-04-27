/* Minimum of all the elements of the array */

#include <stdio.h>
void main()
{
  const int size = 5;
  int arr[size], i, min;

  printf("Enter %d elements: ", size);
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  min = arr[0];
  for (i = 1; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  printf("\nMinimum of all the elements is %d\n", min);
}