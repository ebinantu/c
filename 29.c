#include <stdio.h>
struct student
{
   char name[20];
   int age;
   int mark;
  };
 int main()
 {
   struct student s,*p;
   p=&s;
   printf("enter name");
   scanf("%s",p->name);
   printf("enter age");
   scanf("%d",&p->age);
   printf("enter mark");
   scanf("%d",&p->mark);
   printf("name:%s\nage:%d\nmark:%d",p->name,p->age,p->mark);
 return 0;
 
}

