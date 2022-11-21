/* Count number of digits in a number */

#include <stdio.h>

int count_digits(int n)
{
  int c = 0;
  while (n != 0)
  {
    c++;
    n /= 10;
  }
  return c;
}

void main()
{
  int a, count;
  printf("Enter any integer: ");
  scanf("%d", &a);
  count = count_digits(a);
  printf("Total digits in %d is %d", a, count);
}