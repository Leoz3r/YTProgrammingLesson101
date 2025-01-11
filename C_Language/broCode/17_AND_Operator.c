#include <stdio.h>
#include <stdbool.h>
// must include when using boolean 

int main(void) {

  // logical operators == && (AND) checks if two conditions are true
  float temp = 1000;

  // only one condition needs to be true in order for it to run
  if(temp <= 0 || temp >= 30) {
    printf("\nThe weather is bad!");
  }
  else {
    printf("\nThe weather is good!");
  }


  return 0;
}