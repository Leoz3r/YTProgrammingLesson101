#include <stdio.h>

int main(void)
{
  // BITWISE OPERATORS = special operators used in bit level programming
  //                     (knowing binary is important for this topic)

  // & = AND
  // | = OR
  // ^ = XOR
  // << left shift
  // >> right shift

  int x = 6;  // 6 = 00000110
  int y = 12; //12 = 00001100
  int z = 0;  // 4 = 00000000

  z =  x & y;
  printf("AND = %d\n", z); // 4 = 00000100

  z = x | y;
  printf("OR = %d\n", z); // 14 = 00001110

  z = x ^ y;
  printf("XOR = %d\n", z); // 10 = 00001010

  z = x << 2;
  printf("SHIFT LEFT = %d\n", z); // 24 = 00011000

  z = x >> 2;
  printf("SHIFT RIGHT = %d\n", z); // 1 = 00000001

  return 0;
}