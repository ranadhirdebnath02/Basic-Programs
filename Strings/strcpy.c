/* Define a function to copy one string to another. */

#include <stdio.h>

// copy s1 to s2
void cstrcpy(char *s1, char *s2)
{
  while (*s1 != '\0')
  {
    *s2 = *s1;
    s1++;
    s2++;
  }
  *s2 = '\0';
}

void main()
{
  char str1[100], str2[100];
  printf("Enter a line: ");
  gets(str1);
  cstrcpy(str1, str2);
  printf("%s\n%s\n", str1, str2);
}