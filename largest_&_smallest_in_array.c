//Write a program to find the largest and smallest element in an array
#include <stdio.h>
int main(void){
  int arr[]= {10,20,30,40,50,60};
  int length = sizeof(arr)/sizeof(arr[0]);
  int large = arr[0], small = arr[0];
  for(int i=0; i < length; i++){
    if(arr[i] > large){
      large = arr[i];
    }
    if(arr[i] < small){
      small = arr[i];
    }
  }
  printf("Largest element of array: %d\n", large);
  printf("Smallest element of array: %d\n", small);
  
  return 0;
}
