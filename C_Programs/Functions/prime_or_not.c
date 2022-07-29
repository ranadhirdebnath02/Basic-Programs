/* Prime Number or not */

#include <stdio.h>

// is_prime() function will return 1 if
// n is a is_prime number else return 0
int f_is_prime(int n)
{
  int p = 1, i;
  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      p = 0;
      break;
    }
  }
  return p;
}

void main()
{
  int a, is_prime;
  printf("Enter any integer: ");
  scanf("%d", &a);
  is_prime = f_is_prime(a);
  if (is_prime == 1)
  {
    printf("%d is a prime number", a);
  }
  else
  {
    printf("%d is not a prime number", a);
  }
}