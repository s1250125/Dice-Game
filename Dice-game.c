#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int s1, s2;
 
  srand(time(NULL));
 
  s1 = rand() % 6 + 1;
  s2 = rand() % 6 + 1;
 
  printf("Die 1: %d\nDie 2: %d\n",s1,s2);
  printf("Total value: %d\n",s1+s2);
 
  return 0;
}

//https://github.com/s1250125/Dice-Game.git
