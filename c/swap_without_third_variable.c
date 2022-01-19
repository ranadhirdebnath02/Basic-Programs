/* Swap 2 numbers without using third variable */

#include <stdio.h>
void main()
{
  int num1, num2;
  printf("Enter 2 integers: ");
  scanf("%d%d", &num1, &num2);
  printf("\nBefore swapping value of num1 is %d and num2 is %d", num1, num2); // don't change this line
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = -num2 + num1;
  printf("\nAfter swapping value of num1 is %d and num2 is %d\n", num1, num2); // don't change this line
}