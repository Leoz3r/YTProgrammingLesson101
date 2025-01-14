#include <stdio.h>
#include <math.h>
// include the math library to use math functions

int main(void) {

  double A = sqrt(9);
  double B = pow(2, 4);
  int C = round(3.14);
  int D = ceil (3.14); // round number up
  int E = floor(3.14); // round number down
  double F = fabs(-100); // absolute value 
  double G = log(3); // natural logarithm
  double H = sin(45); // sine
  double I = cos(45); // cosine
  double J = tan(45); // tangent

  // other not listed in video 
  double K = asin(0.5); // arcsine
  double L = acos(0.5); // arccosine
  double M = atan(0.5); // arctangent
  double N = sinh(0.5); // hyperbolic sine
  double O = cosh(0.5); // hyperbolic cosine
  double P = tanh(0.5); // hyperbolic tangent
  double Q = exp(0.5); // exponential
  double T = cbrt(27); // cube root
  double U = hypot(3, 4); // hypotenuse


  printf("\n%lf", A);

  return 0;
}