#include <stdio.h>

int main(void) {

  int age;

  printf("\nEnter your age: ");
  scanf("%d", &age);

  if(age >= 18) {
    printf("You are now signed up!\n");
  }
  else if (age == 0){
    printf("You you can't signed up! You were just born!\n");
  }
  else if(age < 0) {
    printf("You haven't been born yet!\n");
  }
  else {
    printf("You are not old enough to sign up!\n"); 
  }

  return 0;
}