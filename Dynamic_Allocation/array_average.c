/* Average of all the elements of the array using dynamic allocation */

#include <stdio.h>
#include <stdlib.h>
void main()
{
  int s, sum = 0;
  double avg;
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

  for (t = arr; t < arr + s; t++)
  {
    sum += *t;
  }

  avg = sum / s;
  printf("\nAverage of all the elements is %lf\n", avg);

  free(arr);
}