#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomNumber(int n){
  printf("time(NULL) %ld: ", time(NULL));
  printf("srand(time(NULL)) %ld: ", srand(time(NULL)));
  
  srand(time(NULL));
  return rand() % n;
}

// int greater(char c1, char c2){
  
// }
int main(void){

  printf("The random number between 0 to 5 is %d", randomNumber(4));
  return 0;
}
