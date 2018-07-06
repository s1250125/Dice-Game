#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int s1, s2;
  char name[100];

  printf("What is your name?\n>");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
 
  srand(time(NULL));
 
  s1 = rand() % 6 + 1;
  s2 = rand() % 6 + 1;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\nDie 2: %d\n",s1,s2);
  printf("Total value: %d\n",s1+s2);

  return 0;
}

//https://github.com/s1250125/Dice-Game.git


