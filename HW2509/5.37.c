#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
  int i = 1, x = 2, ch = 1, z = 2;
  double res = 1;
  for (i; i <= 10; i++)
  {
    if ((ch + i) % 2 == 0)
      res += ((ch + i) / (z + i) * (pow(x, i)));
    else
      res -= ((ch + i) / (z + i) * (pow(x, i)));
  }
  printf("%lf\n", res);
}