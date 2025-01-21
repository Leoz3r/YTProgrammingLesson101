#include <stdio.h>

int main(void) 
{
  char cars[][10] = {"Mustang","Corvette","Camaro"};

  //cars[0] = "Tesla";    can't dirrectly assign a value 
  strcpy(cars[0], "Tesla");

  for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
  {
    printf("%s\n", cars[i]);
  }

  return 0;
}