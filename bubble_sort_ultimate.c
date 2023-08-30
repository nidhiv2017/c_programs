#include <stdio.h>
int j = 0;
void printarray(int *array, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d, ", array[i]);
  }
  printf("\n");
}

int isSort(int *arr, int length) {
  for (int i = 0; i < length; i++) {
    if (i == length - 1) {

    } else {
      if (arr[i] > arr[i + 1]) {
        j++;
        return 1;
      }
    }
  }
  return 0;
}

void arrange(int *arr, int length) {
  int temp;
  for (int i = 0; i < length; i++) {
    if (i == length - 1) {

    } else {
      if (arr[i] > arr[i + 1]) {
        
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }

    if(isSort(arr, length) == 1){
      
    if (i == length - 1) {
      j++;
      printarray(arr, length);
      i = -1;
      length = length - 1;
      if (length == 1) {
        break;
      }
    }
    }
  }
  printf("j: %d \n", j);
}


int main(void) {
  int array[] = {23, 4, 3, 1, 9, 8, 7, 10, 19, 11, 18};
  int length = sizeof(array) / sizeof(array[0]);

  arrange(array, length);
  printarray(array, length);

  return 0;
}
