#include <stdio.h>

struct s
{
  char c;
  int i;
  double d;
};

union u
{
  char c;
  int i;
  double d;
};

void main()
{
  struct s s1;
  union u u1;

  s1.c = 'Z';
  u1.c = 'Z';
  printf("After initializing variable c\n");
  printf("Structure: c = %c, i = %d, d = %lf\n", s1.c, s1.i, s1.d);
  printf("Union: c = %c, i = %d, d = %lf\n\n", u1.c, u1.i, u1.d);

  s1.i = 20;
  u1.i = 20;
  printf("After initializing variable i\n");
  printf("Structure: c = %c, i = %d, d = %lf\n", s1.c, s1.i, s1.d);
  printf("Union: c = %c, i = %d, d = %lf\n\n", u1.c, u1.i, u1.d);

  s1.d = 20.5;
  u1.d = 20.5;
  printf("After initializing variable d\n");
  printf("Structure: c = %c, i = %d, d = %lf\n", s1.c, s1.i, s1.d);
  printf("Union: c = %c, i = %d, d = %lf\n\n", u1.c, u1.i, u1.d);
}