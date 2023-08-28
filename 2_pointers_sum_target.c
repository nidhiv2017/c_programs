#include <stdio.h>
int sumtar(int *arr, int tar, int n) {
  int i = 0, j = n - 1;
  for (; i < j;) {
    if (arr[i] + arr[j] == tar) {
      printf("Sum found");
      break;
    } else if (arr[i] + arr[j] > tar) {
      j--;
    } else {
      i++;
    }
  }
}
int main(void) {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
  int target = 27;
  int size = sizeof(arr) / sizeof(arr[0]);
  sumtar(arr, target, size);
  return 0;
}
