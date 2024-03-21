#include<stdio.h>
struct person
{
  int rollno;
  char name[20];
  int mark;
};
int main()
{
  struct person p[10];
  int i;
  printf("Enter the rollno  ,  name  ,age\n");
  for(i=0;i<10;i++)
  { 
    scanf("%d",&p[i].rollno);
    scanf("%s",p[i].name);
    scanf("%d",&p[i].mark);
  }
  printf("rollno\tname\tmarks");
  for(i=0;i<10;i++)
  { 
    printf("%d",p[i].rollno);
    printf("%s",p[i].name);
    printf("%d",p[i].mark);
  }
 }
