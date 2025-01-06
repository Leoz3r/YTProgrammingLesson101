#include <stdio.h>

int main(void) {

  // VARIABLES
  /*
  Variables are containers for storing data values
  The data type of the value determines the size and the layout of the variable's memory
  The name of the variable is used to reference and use the data stored
  */

  int x; // declaration 
  x = 10; // initialization
  int y = 20; // declaration and initialization

  int age = 30; // integer
  float gpa = 3.4; // floating point number
  double pi = 3.14159; // double precision floating point number
  char grade = 'A'; // single character
  char name[] = "Bro Code"; // array of characters (string)

  printf("You are %d years old\n", age);
  printf("You have a GPA of %.2f\n", gpa);
  printf("PI is approximately %.5f\n", pi);
  printf("You got a grade of %c\n", grade);
  printf("Your name is %s\n", name);

  return 0;
}