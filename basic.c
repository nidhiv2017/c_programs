//fibonacci series using function
#include<stdio.h>
int fib(int n){
  int f1 = 0, f2 = 1, f3, i;
    if (n == 0)
        return f1;
    for (i = 2; i <= n; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
  return f3;
}
int main(void){
  int value;
  printf("Enter the value: ");
  scanf("%d", &value);
  printf("Value of %d in fibonacci series is %d",value, fib(value));
  return 0;
}
