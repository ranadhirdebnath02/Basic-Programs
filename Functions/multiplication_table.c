/* Multiplication Table */

#include <stdio.h>

void multiplcation_table(int n)
{
  int i;
  printf("Multipliucation table of %d:", n);
  for (i = 1; i <= n; i++)
  {
    printf("\n%d x %d = %d", n, i, (n * i));
  }
}

void main()
{
  int a, sum;
  printf("Enter any integer: ");
  scanf("%d", &a);
  multiplcation_table(a);
}