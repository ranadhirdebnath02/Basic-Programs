/* Power of a number */

#include <stdio.h>

int power(int base, int exp)
{
  int res = 1, i;
  for (i = 1; i <= exp; i++)
  {
    res = res * base;
  }
  return res;
}

void main()
{
  int b, e, result;
  printf("Enter base: ");
  scanf("%d", &b);
  printf("Enter exponent: ");
  scanf("%d", &e);
  result = power(b, e);
  printf("%d ^ %d = %d", b, e, result);
}