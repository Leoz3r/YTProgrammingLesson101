#include <stdio.h>
#include <stdbool.h>

int main(void){

  // logical operators = ! (NOT) reverses the state of a condition

  bool sunny = true;

  if(!sunny) {
    printf("\nIt's sunny outside!");
  } else {
    printf("\nIt's not sunny outside!");
  }

  return 0;
}