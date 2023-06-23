//Write a program that takes a sentence as input and prints the longest word in it
#include <stdio.h>

int main(void) {
    char string[] = "arora";
    int isPalindrome = 1;
    int length = sizeof(string) / sizeof(string[0]);

    for (int i = 0; i < length / 2; i++) {
        if (string[i] != string[length - i - 1]) {
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
