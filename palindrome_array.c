#include <stdio.h>
int main(void){
  int array[5] = {1,2,2,2,1};
  int true;
  int length = sizeof(array)/sizeof(array[0]);
  
  for(int i = 0; i < length; i++){
   if(length % 2 == 0 || length == 5){ 
    if(array[length - i] == array[i] ){
      true = 1;
    } 
  } else {
      true = 2;
    }
  if(true == 1){
    printf("It's palindrome");
  } else {
    printf("It's not palindrome");
  }
  return 0;
}
}
