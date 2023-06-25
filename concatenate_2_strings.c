//Write a program to concatenate two strings and display the result.
#include <stdio.h>
#include <string.h>

int main(void) {
  char name1[12]; // Increased size to store up to 11 characters + null terminator
  char name2[6];
  char name3[6] = " is a";
  char name4[20] = " husband of ";
  printf("Enter the first name: ");
  scanf("%11s", name1); // Limit input to 11 characters to avoid buffer overflow

  printf("Enter the second name: ");
  scanf("%5s", name2); // Limit input to 5 characters to avoid buffer overflow

  printf("%s",strcat(name1,name3));
  printf("%s",strcat(name4,name2));
  
  return 0;
}
