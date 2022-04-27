/* Maximum of all the elements of the array */

#include <stdio.h>
#include <stdlib.h>
void main()
{
  int s, max;
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

  for (t = arr, max = *t; t < arr + s; t++)
  {
    if (*t > max)
    {
      max = *t;
    }
  }

  printf("\nMaximum of all the elements is %d\n", max);

  free(arr);
}