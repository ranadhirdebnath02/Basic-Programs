/* Display Own Content Program */

#include <stdio.h>
void main()
{
  FILE *fp = fopen("display_own_content.c", "r");

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