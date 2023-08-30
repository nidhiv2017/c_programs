#include <stdio.h>
// int j = 0;
int arrange(int* array, int length){
  int temp;
  for(int i = 0; i < length; i++){
    
    if(array[i] > array[i+1]){
      
      // j++;
      temp = array[i];
      array[i] = array[i+1];
      array[i+1] = temp;
      // arrange(array, length);
      // i = -1;
    }
    if(i == length - 1){
      i = -1;
      length = length - 1;
      if(length == 1){
      
        break;
      }
    }
  }
  // printf("j: %d\n", j);
  
}
int main(void){
int arr[] = {4,3,2,8,9,10,11,53,1,7, 66, 43, 21, 45};
  int length= sizeof(arr)/sizeof(arr[0]);
  arrange(arr, length);
  for(int i = 0; i < length; i++){
    printf("%d, ", arr[i]);
  }
  return 0;
}
