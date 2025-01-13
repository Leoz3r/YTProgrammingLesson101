#include <stdio.h>

// this still works and also (char name[], int age)
void birthday(char x[], int y)
{
  printf("\nHappy birthday dear %s!", x);
  printf("\nYou are %d years old!", y);
}

int main(void)
{
  char name[] = "Bro";
  int age = 21;

  birthday(name, age);

  return 0;
}