/* Define a function to find length of a string */

#include <stdio.h>

int cstrlen(char str[])
{
  int i;
  for (i = 0; str[i] != '\0'; i++);
  return i;
}

void main()
{
  char s[100];
  int len;
  printf("Enter a line: ");
  gets(s);
  len = cstrlen(s);
  printf("Number of characters in the line = %d\n", len);
}