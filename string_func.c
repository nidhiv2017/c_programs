#include <stdio.h>
#include <string.h>

int main(void){
  char name1[6];
  char name2[5]; 
  printf("Enter the first name: ");
  for(int i = 0; i < 6; i++){
    scanf(" %c", &name1[i]);
  }
  printf("Enter the second name: ");
  for(int i = 0; i < 5; i++){
    scanf(" %c", &name2[i]);
  }

  for(int i = 0; i < 6; i++){
    printf("%c", name1[i]);
  }
  for(int i = 0; i < 5; i++){
    printf("%c", name2[i]);
  }
  
  return 0;
}
