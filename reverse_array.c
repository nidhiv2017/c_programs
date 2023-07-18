//reversing array using function
#include <stdio.h>
void reverse(int array[]){
  int a;
  for(int i = 0; i < 9/2; i++){
    int a = array[i];
    array[i] = array[8-i];
    array[8-i] = a;
  }
}
void printarray(int array[]){
    for(int i = 0; i < 9; i++){
      printf("The index %d has value of %d\n",i, array[i]);
    }
  }

int main(void){
  int array[] = {1,2,3,4,5,6,7,8,9};
  printf("Sequence of array before reveresal:\n");
  printarray(array);
  reverse(array);
  printf("Sequence of array after reveresal:\n");
  printarray(array);
  
  return 0;
}
