/* Define a function to concat two strings. */

#include <stdio.h>

// append s2 at the end of s1
void cstrcat(char *s1, char *s2)
{
  for (; *s1 != '\0'; s1++);
  while (*s2 != '\0')
  {
    *s1 = *s2;
    s1++;
    s2++;
  }
  *s2 = '\0';
}

void main()
{
  char str1[100], str2[100];
  printf("Enter first line: ");
  gets(str1);
  printf("Enter second line: ");
  gets(str2);
  cstrcat(str1, str2);
  printf("%s\n%s\n", str1, str2);
}