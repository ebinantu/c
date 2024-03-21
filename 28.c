#include <stdio.h>
struct person
{
   char name[20];
   int age;
  };
  void display(struct person);
  int main()
  {
   
    int i;
    struct person p1;
    printf("enter name");
    scanf("%s",p1.name);
    printf("enter age");
    scanf("%d",&p1.age);
    display(p1);
    return 0;
  }
void display(struct person a)
{
 printf("Name:%s\n",a.name);
 printf("age:%d",a.age);
}
