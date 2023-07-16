//a structure contain another structure as a member
#include<stdio.h>
struct name{
char firstname[50];
char lastname[50];
};

struct date{
int day;
int month;
int year;
};

struct person {
  int id_no;
  struct name identity;
  struct date birthday;
};


int main(void){
  struct person p1, p2;
  printf("Enter the id of person 1: ");
  scanf("%d", &p1.id_no);
  printf("Enter the name of person 1: ");
  scanf("%s%s",p1.identity.firstname, p1.identity.lastname);
  printf("Enter the birthday of person 1: ");
  scanf("%d %d %d", &p1.birthday.day,&p1.birthday.month,&p1.birthday.year);

  printf("Id of person 1: %d\n", p1.id_no);
  printf("Name of person 1: %s %s\n", p1.identity.firstname, p1.identity.lastname);
  printf("Birthday of person 1: %d %d %d\n",p1.birthday.day,p1.birthday.month,p1.birthday.year); 
  

  return 0;
}
