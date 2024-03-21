#include <stdio.h>
int main()
{
 union stnd
 {
    int a;
    char name[10];
    float per;
  };
  union stnd s1;
  printf("enter the name:");
  scanf("%s",s1.name);
  printf("\n the name is %s ",s1.name);
  printf("\nenter the class no:");
  scanf("%d",&s1.a);
  printf("\n the class number is:%d",s1.a);
  printf("\n Enter the total percentage:");
  scanf("%f",&s1.per);
  printf("\n The percentage is %f",s1.per);
 }

