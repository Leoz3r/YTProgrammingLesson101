#include <stdio.h>
#include <stdbool.h>

int main(void){

  // logical operators = || (OR) checks if at least one condition is true

  float temp = 25;

  if(temp <= 0 ){
    printf("\nThe weather is good!");
  }
  else if (temp >= 30) {
    printf("\nThe weather is bad!");
  }
  else {
    printf("\nThe weather is bad!");
  }

  return 0;
}