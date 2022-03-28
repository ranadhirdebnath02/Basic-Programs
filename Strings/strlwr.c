/* Define a function to convert a string to lower. */

#include <stdio.h>

void strlwr(char *s)
{
  char *p = s;
  for (; *s != '\0'; s++)
  {
    if (*s >= 65 && *s <= 90)
    {
      *s = *s + 32;
    }
  }
}

void main()
{
  char str[100];
  printf("Enter a line: ");
  gets(str);
  strlwr(str);
  puts(str);
}