/* Reverse a number */

#include <stdio.h>

int count_digits(int n)
{
  int r = 0, t;
  while (n != 0)
  {
    t = n % 10;
    r = r * 10 + t;
    n = n / 10;
  }
  return r;
}

void main()
{
  int a, rev;
  printf("Enter any integer: ");
  scanf("%d", &a);
  rev = count_digits(a);
  printf("Reverse of %d is %d", a, rev);
}