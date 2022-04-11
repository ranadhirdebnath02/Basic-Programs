/* Calculate sum of n natural numbers */

#include <stdio.h>

int func_sum(int n)
{
  int s = 0, i;
  for (i = 1; i <= n; i++)
  {
    s += i;
  }
  return s;
}

void main()
{
  int a, sum;
  printf("Enter any integer: ");
  scanf("%d", &a);
  sum = func_sum(a);
  printf("Sum of natural numbers upto %d is %d", a, sum);
}