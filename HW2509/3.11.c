/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
  int x, y;

  //a)
  x = 1, y = -1;
  if (x * x + y * y <= 4)
    printf("a) TRUE\n");
  else
    printf("a) FALSE\n");

  //b)
  x = 1, y = 2;
  if ((x >= 0) || (y * y != 4))
    printf("b) TRUE\n");
  else
    printf("b) FALSE\n");

  //c)
  if ((x >= 0) && (y * y != 4))
    printf("c) TRUE\n");
  else
    printf("c) FALSE\n");

  //d)
  x = 2, y = 1;
  if ((x * y != 0) && (y > x))
    printf("d) TRUE\n");
  else
    printf("d) FALSE\n");

  //e)
  if ((x * y != 0) || (y < x))
    printf("e) TRUE\n");
  else
    printf("e) FALSE\n");

  //f)
  if ((!(x * y < 0)) && (y > x))
    printf("f) TRUE\n");
  else
    printf("f) FALSE\n");

  //g)
  x = 1, y = 2;
  if ((!(x * y < 0)) || (y > x))
    printf("g) TRUE\n");
  else
    printf("g) FALSE\n");
}
*/