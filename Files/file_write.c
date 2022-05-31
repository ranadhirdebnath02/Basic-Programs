/* File Write Program */

#include <stdio.h>
void main()
{
  FILE *fp = fopen("file.txt", "w");
  char line[] = "This is a C Program";
  int i;

  if (fp != NULL)
  {
    for (i = 0; line[i] != '\0'; i++)
    {
      putc(line[i], fp);
    }
    fclose(fp);
  }
  else
  {
    printf("Cannot open file");
  }
}