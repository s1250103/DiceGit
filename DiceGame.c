#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char name[30];

  printf("what is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
	 
  
//previous
  int d1,d2;
  srand(time(NULL));

  
  printf("Rolling the dice...\n");

  d1 = rand() % 6 + 1;
  printf("Die 1: %d\n",d1);
  d2 = rand() % 6 + 1;
  printf("Die 2: %d\n",d2);

  printf("Total value: %d\n",d1 + d2);
 // previous

  if( 7 < ( d1 + d2) )printf("%s won!\n",name);
  else printf("%s lost!\n",name);


return 0;
}

  
