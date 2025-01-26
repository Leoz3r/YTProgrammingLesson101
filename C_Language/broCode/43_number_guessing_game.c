#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
  const int MIN = 1;
  const int MAX = 100;
  int guess; 
  int guesses = 0;
  int answer;

  //uses the curent time as seed
  srand(time(0));

  //generate a random number between MIN & MAX
  answer = (rand() % MAX) + MIN;

  // printf("%d", answer);

  do {
    printf("Enter a guess: ");
    scanf("%d", &guess);
    if(guess > answer) 
    {
      printf("Too high!\n");
    }
    else if(guess < answer)
    {
      printf("Too Low!\n");
    }
    else{
      printf("CORRECT!\n");
    }
    guesses++;
  } while(guess != answer);

  printf("**********************\n");
  printf("answer: %d\n", answer);
  printf("guesses: %d\n", guesses);
  printf("**********************");

  return 0;
}
