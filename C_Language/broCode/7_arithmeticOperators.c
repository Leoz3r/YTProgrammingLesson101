#include <stdio.h>

int main(void) {

  // arithmetic operators
  // + = addition
  // - = subtraction
  // * = multiplication
  // / = division
  // % = modulus (remainder)  
  // ++ = increment
  // -- = decrement

  int x = 5;
  int y = 2;

  // int z = x + y;
  // int z = x - y;
  // int z = x * y;
  // float z = x / (float) y; 
  // int can only store whole numbers, so the result will be 2 if divided 
  // int z = x % y;

  x++;
  y--;

  printf("%d %d", x, y);

  return 0;
}