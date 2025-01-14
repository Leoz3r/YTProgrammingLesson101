#include <stdio.h>

double square(double x)
{
  // double result = x * x;
  return x * x;
}

int main(void) 
{
  double x = square(3.14);
  printf("%lf", x);

  // we returning 0 is the exit status if this program runs successfully, that's why we use int 
  return 0;
}