#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  // pseduo random nubmers = A set of values or elements that are statistically random 
  //                         (Don't use these for any sort of cryptogprahic securty)

  srand(time(0)); //s - seed, r - random 

  int number1 = (rand() % 20) + 1;
  int number2 = (rand() % 20) + 1;
  int number3 = (rand() % 20) + 1;

  printf("%d\n", number1);
  printf("%d\n", number2);
  printf("%d\n", number3);


  return 0;
}