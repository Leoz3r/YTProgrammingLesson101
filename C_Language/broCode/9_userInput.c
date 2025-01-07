#include <stdio.h>
#include <string.h>


int main(void) {

  char name[25]; // 25 bytes
  int age;

  printf("What is your name? ");
  //scanf("%s", name);
  // will read any white space as a new line

  // will include the new line character 
  fgets(name, 25, stdin);
  name[strlen(name)-1] = '\0'; // remove the new line character


  printf("How old are you? ");
  scanf("%d", &age);

  printf("Hello %s, how are you?\n", name);
  printf("You are %d years old\n", age);

  return 0;
}