#include <stdio.h>

int main(void) {
    int array[] = {1, 6, 2, 2, 1};
    int isPalindrome = 1;
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length / 2; i++) {
        if (array[i] != array[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1) {
        printf("It's a palindrome.\n");
    } else {
        printf("It's not a palindrome.\n");
    }

    return 0;
}
