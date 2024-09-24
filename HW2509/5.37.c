#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
  int i = 1,chc = 1;
  double res = 1, x = 2, ch = 1, z = 2,u = 1;
  for (i; i <= 10; i++)
  {
    if ((chc + i) % 2 == 0)
    {
      res -= ((ch + u) / (z + u) * (pow(x, u)));
      printf("%lf %lf %lf %d\n",ch+u, z+u, u, 1);
    }
    else
    {
      res += ((ch + u) / (z + u) * (pow(x, u)));
      printf("%lf %lf %lf %d\n", ch+u, z+u, u,0);
    }
    u++;
  }
  printf("%lf\n", res);
}