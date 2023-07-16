//getting details from user while using struct
#include<stdio.h>
struct person{
int id_no;
char name[50];
float height;
} p1, p2, p3;
int main(void){
  printf("Enter the Person 1 ID: ");
  scanf("%d", &p1.id_no);
  printf("Enter the Person 1 name: ");
  scanf("%s", p1.name);
  printf("Enter the Person 1 height: ");
  scanf("%f", &p1.height);

  printf("Enter the Person 2 ID: ");
  scanf("%d", &p2.id_no);
  printf("Enter the Person 2 name: ");
  scanf("%s", p2.name);
  printf("Enter the Person 2 height: ");
  scanf("%f", &p2.height);

  printf("Enter the Person 3 ID: ");
  scanf("%d", &p3.id_no);
  printf("Enter the Person 3 name: ");
  scanf("%s", p3.name);
  printf("Enter the Person 3 height: ");
  scanf("%f", &p3.height);

  printf("The ID of person 1: %d\n The name of person 1: %s\n The height of person 1: %f\n\n", p1.id_no, p1.name, p1.height);

  printf("The ID of person 2: %d\n The name of person 2: %s\n The height of person 2: %f\n\n", p2.id_no, p2.name, p2.height);

  printf("The ID of person 3: %d\n The name of person 3: %s\n The height of person 3: %f\n\n", p3.id_no, p3.name, p3.height);
  
  return 0;
}
