// Write a program to remove duplicate elements from an array
#include <stdio.h>

int duplicates(int array[], int size) {
    int length = size;
    
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (array[i] == array[j]) {
                array[j] = array[length - 1];
                length--;
                j--;
            }
        }
    }
    
    return length;
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 1, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    
    size = duplicates(array, size);
    
    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
