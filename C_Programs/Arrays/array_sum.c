/* Sum of all the elements of the array */

#include<stdio.h>
void main()
{
  const int size = 5;
  int arr[size], i, sum = 0;

  printf("Enter %d elements: ", size);
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < size; i++)
  {
    sum += arr[i];
  }

  printf("\nSum of all the elements is %d\n", sum);
}