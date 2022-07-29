/* File Read Program */

#include <stdio.h>
void main()
{
  FILE *src = fopen("src.txt", "r");
  FILE *des = fopen("des.txt", "w");

  if (src != NULL && des != NULL)
  {
    char ch = getc(src);
    while (ch != EOF)
    {
      putc(ch, des);
      ch = getc(src);
    }
    fclose(src);
    fclose(des);
  }
  else
  {
    printf("Cannot open file");
  }
}