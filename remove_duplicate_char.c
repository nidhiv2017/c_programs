// Write a program to remove duplicate elements from an array
#include <stdio.h>

int duplicates(char string[], int size) {
    int length = size;
    
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (string[i] == string[j]) {
                string[j] = string[length - 1];
                length--;
                j--;
            }
        }
    }
    
    return length;
}

int main() {
    char string[11] = "abcdefghap"; 
    int size = sizeof(string) / sizeof(string[0]) - 1;

    printf("Original string: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", string[i]); 
    }
    
    size = duplicates(string, size);
    
    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", string[i]);
    }

    return 0;
}
