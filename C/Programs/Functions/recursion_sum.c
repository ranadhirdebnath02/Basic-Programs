/* Sum of n numbers using recursion */

#include <stdio.h>

long sum(long n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n + sum(n - 1);
  }
}

void main()
{
  int a, f;
  printf("Enter any number: ");
  scanf("%d", &a);
  f = sum(a);
  printf("Sum of natural numbers upto %d is %d", a, f);
}