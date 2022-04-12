/* Armstrong or not */

#include <stdio.h>

// armstrong() function will return 1 if
// n is an armstrong number else return 0
int armstrong(int n)
{
  int t, sum = 0, x;

  t = n;
  while (t != 0)
  {
    x = t % 10;
    sum = sum + (x * x * x);
    t /= 10;
  }
  return (n == sum ? 1 : 0);
}

void main()
{
  int a, is_armstrong;
  printf("Enter any 3 digit number: ");
  scanf("%d", &a);
  is_armstrong = armstrong(a);
  if (is_armstrong == 1)
  {
    printf("%d is an armstrong number", a);
  }
  else
  {
    printf("%d is not an armstrong number", a);
  }
}