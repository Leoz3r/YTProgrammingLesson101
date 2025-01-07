#include <stdio.h>

int main(void) {

  // constant = fixed value that cannot be altered by the program durings its execution

  const float PI = 3.14159;

  // will encounter an error if you change the value of PI after the const declaration

  printf("%f", PI);

  return 0;
}