#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int s1, s2;
 
  srand(time(NULL));
 
  s1 = rand() % 6 + 1;
  s2 = rand() % 6 + 1;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\nDie 2: %d\n",s1,s2);
  printf("Total value: %d\n",s1+s2);

  if((s1+s2) > 7) printf("You won!\n");
  else printf("You lost!\n");
  
  return 0;
}

//https://github.com/s1250125/Dice-Game.git
