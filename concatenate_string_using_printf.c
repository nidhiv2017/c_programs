// concatenate string using simple printf method
#include <stdio.h>
#include <string.h>

int main(void) {
  char name1[12]; // Increased size to store up to 11 characters + null terminator
  char name2[6];
  //char name3[] = " is a";
  char name4[20] = " is a husband of ";
  printf("Enter the first name: ");
  scanf("%11s", name1); // Limit input to 11 characters to avoid buffer overflow

  printf("Enter the second name: ");
  scanf("%5s", name2); // Limit input to 5 characters to avoid buffer overflow

  printf("%s%s%s", name1,name4, name2);
  
  return 0;
}
