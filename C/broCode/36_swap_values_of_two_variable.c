#include <stdio.h>
#include <string.h>

int main(void) 
{
  char x[15] = "water";
  char y[15] = "soda"; //needs to consider the size using the strcpy function 
  char temp[15]; 

  strcpy(temp, x);
  strcpy(x, y);
  strcpy(temp, temp);

  /* 
  temp = x;
  x = y;
  y = temp; 
  */

  printf("x = %s\n", x);
  printf("y = %s\n", y);

  return 0;
}