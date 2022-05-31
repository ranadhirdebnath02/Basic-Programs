/* File Read Program */

#include <stdio.h>
void main()
{
  FILE *fp = fopen("file.txt", "r");

  if (fp != NULL)
  {
    char ch = getc(fp);
    while (ch != EOF)
    {
      printf("%c", ch);
      ch = getc(fp);
    }
    fclose(fp);
  }
  else
  {
    printf("Cannot open file");
  }
}