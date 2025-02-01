#include <stdio.h>

void hello(char name[], int age); // function prototype

int main(void){

  // function prototype 

  // WHAT IS IT?
  // Function decleration, w/o a body, before main()
  // Ensures that calls to a function are made with the correct arguments

  char name[] = "Bro";
  int age = 21;

  hello(name, age);

  return 0;
}

void hello(char name[], int age) {

  printf("\nHello %s", name);
  printf("\nYou are %d years old", age);
}