#include <stdio.h>

int main(void) {

  const double PI = 3.14159;
  double radius; 
  double circumference;
  double area; 

  printf("\nEnter the radius of a circle: ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("Circumference: %lf\n", circumference);
  printf("Area: %lf\n", area);

  return 0;
}