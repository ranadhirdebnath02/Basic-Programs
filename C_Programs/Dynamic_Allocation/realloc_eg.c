/* Example of realloc() */

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int s, ns;
  printf("Enter array size: ");
  scanf("%d", &s);
  // int *arr = (int *)calloc(s, sizeof(int));
  int *arr = (int *)malloc(s * sizeof(int));
  int *t = arr;
  printf("Enter %d elements: ", s);
  for (; t < arr + s; t++)
  {
    scanf("%d", t);
  }

  printf("Entered array values are: ");
  for (t = arr; t < arr + s; t++)
  {
    printf("%d ", *t);
  }

  printf("\n\nEnter new array size: ");
  scanf("%d", &ns);
  arr = (int *)realloc(arr, ns * sizeof(int));
  printf("Enter more %d elements: ", ns - s);
  for (t = arr + s; t < arr + ns; t++)
  {
    scanf("%d", t);
  }

  printf("Entered all array values are: ");
  for (t = arr; t < arr + ns; t++)
  {
    printf("%d ", *t);
  }

  free(arr);
}