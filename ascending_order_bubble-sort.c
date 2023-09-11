//bubble sort

#include <stdio.h>
  int arrange(int *arr, int length){
    int temp;
    for(int j = 0; j < length - 1; j++){
    
    for(int i = 0; i < length - 1; i++){
        if(arr[i] > arr[i+1]){
          temp = arr[i];
          arr[i] = arr[i+ 1];
          arr[i+1] = temp;
        }
      }
    }
    for(int i = 0; i < length; i++){
      printf("%d, ", arr[i]);
    }
  }

int main(void){
  int arr[] = {2,3,5,9,10,6,12};
  int length = sizeof(arr)/sizeof(arr[0]);
  arrange(arr, length);
  return 0;
}
