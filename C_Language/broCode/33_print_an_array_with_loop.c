#include <stdio.h>

int main(void) 
{
  double prices[] = {5,0, 10.0, 15.0, 25.0, 20.0, 30.0};
  
  // printf("%d bytes\n", sizeof(prices));
  // each number uses 8 bytes, 8 x 6 = 48 

  for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
  {
    printf("$%.2lf", prices[i]);
  }

  return 0;
}