/* Maximum of all the elements of the array */

#include <stdio.h>
void main()
{
  const int size = 5;
  int arr[size], i, max;

  printf("Enter %d elements: ", size);
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  max = arr[0];
  for (i = 1; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  printf("\nMaximum of all the elements is %d\n", max);
}