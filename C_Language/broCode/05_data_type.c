#include <stdio.h>
#include <stdbool.h>


int main(void) {

  char a = 'C'; // single character %c 
  char b[] = "Bro"; // array of characters %s

  float c = 3.14159; // 4 bytes (32 of precision) 6 - 7 digits %f
  double d = 3.141592653589793; // 8 bytes (64 of precision) 15 - 16 digits %lf

  bool e = true; // 1 byte (true or fales) %d
  // 1 for true and 0 for false

  char f = 100; // 1 byte ( -128 to 127) %d or %c
  // 100 is the ASCII value for 'd' 
  unsigned char g = 255; // 1 byte (0 to 255) %d or %c

  short h = 32767; // 2 bytes (-32,768 to 32,767) %d
  unsigned short i = 65535; // 2 bytes (0 to 65,535) %d

  int j = 2147483647; // 4 bytes (-2,147,483,648 to 2,147,483,647) %d
  unsigned int k = 4294967295; // 4 bytes (0 to 4,294,967,295) %u

  // exceeding the range will give you an overflow 

  long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to 9 quintillion) %lld
  unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to 18 quintillion) %llu
  // add a U so we can display with no warning

  printf("%c\n", a); // char 
  printf("%s\n", b); // character array
  printf("%f\n", c); // float
  // or printf("%.2f\n", (float) c); // float with 2 decimal places
  printf("%lf\n", d); // double
  printf("%d\n", e); // bool
  printf("%d\n", f); // char as numeric value 
  printf("%d\n", g); // unsigned char as numeric value
  printf("%d\n", h); // short 
  printf("%d\n", i); // unsigned short
  printf("%d\n", j); // int
  printf("%u\n", k); // unsigned int
  printf("%lld\n", l); // long long int 
  printf("%llu\n", m); // unsigned long long int 
  


  return 0;
}