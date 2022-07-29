/* Minimum of all the elements of the array */

#include <stdio.h>
#include <stdlib.h>
void main()
{
  int s, min;
  printf("Enter array size: ");
  scanf("%d", &s);
  int *arr = (int *)calloc(s, sizeof(int));
  // int *arr = (int *)malloc(s * sizeof(int));
  int *t;

  printf("Enter %d elements: ", s);
  for (t = arr; t < arr + s; t++)
  {
    scanf("%d", t);
  }

  for (t = arr, min = *t; t < arr + s; t++)
  {
    if (*t < min)
    {
      min = *t;
    }
  }

  printf("\nMinimum of all the elements is %d\n", min);

  free(arr);
}