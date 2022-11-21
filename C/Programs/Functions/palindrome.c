/* Palindrome or not */

#include <stdio.h>

// palindrome() function will return 1 if
// n is a palindrome number else return 0
int palindrome(int n)
{
  int r = 0, t = n, x;
  while (t != 0)
  {
    x = t % 10;
    r = r * 10 + x;
    t = t / 10;
  }
  return (n == r ? 1 : 0);
}

void main()
{
  int a, is_palindrome;
  printf("Enter any integer: ");
  scanf("%d", &a);
  is_palindrome = palindrome(a);
  if (is_palindrome == 1)
  {
    printf("%d is a palindrome number", a);
  }
  else
  {
    printf("%d is not a palindrome number", a);
  }
}