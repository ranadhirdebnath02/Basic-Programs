/* Define a function to convert a string to uppercase. */

#include <stdio.h>

void cstrupr(char *s)
{
  char *p = s;
  for (; *s != '\0'; s++)
  {
    if (*s >= 97 && *s <= 122)
    {
      *s = *s - 32;
    }
  }
}

void main()
{
  char str[100];
  printf("Enter a line: ");
  gets(str);
  cstrupr(str);
  puts(str);
}