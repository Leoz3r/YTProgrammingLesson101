#include <stdio.h>
#include <ctype.h>

int main(void) {

  char unit;
  float temp;

  pritnf("\nIs the temperature in (F) or (C)? ");
  scanf("%c", &unit);

  unit = toupper(unit);
  // to allow lowercase 

/*
 git config --global user.email "you@example.com"
git config --global user.name "Your Name"
  */
  if(unit == 'C') {
    printf("\nEnter the temp in Celsius: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nThe temp in Farenheit is: %.1f", temp);
  }
  else if (unit == 'F') {
    printf("\nEnter the temp in Farenheit: ");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("\nThe temp in Celsius is: %.1f", temp);

  }
  else {
    printf("\n%c is not a valid unit of measurement", unit);
  }

  return 0; 
}