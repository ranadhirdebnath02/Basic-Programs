/* Factorial using recursion */

#include <stdio.h>

long factorial(long n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

void main()
{
  int a, f;
  printf("Enter any number: ");
  scanf("%d", &a);
  f = factorial(a);
  printf("Factorial of %d is %d", a, f);
}