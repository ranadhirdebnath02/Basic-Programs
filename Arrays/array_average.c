/* Average of all the elements of the array */

#include<stdio.h>
void main()
{
  const int size = 5;
  int arr[size], i, sum = 0;
  float avg = 0;

  printf("Enter %d elements: ", size);
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < size; i++)
  {
    sum += arr[i];
  }

  avg = sum / size;

  printf("\nAverage of all the elements is %f\n", avg);
}