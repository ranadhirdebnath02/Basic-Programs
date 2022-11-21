/* largest between 2 numbers */

#include <stdio.h>

int max(int n1, int n2)
{
  if (n1 > n2)
  {
    return n1;
  }
  else
  {
    return n2;
  }
}

void main()
{
  int a, b, m;
  printf("Enter two integers: ");
  scanf("%d%d", &a, &b);
  m = max(a, b);
  printf("%d is largest", m);
}