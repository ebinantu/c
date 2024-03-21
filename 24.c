#include<stdio.h>
void sumrev(int *p,int *r,int *n);
int main()
{
  int sum,rev=0,tem,n;
  printf("enter the number");
  scanf("%d",&n);
  sumrev(&sum,&rev,&n);
  printf("sum=%d \t rev=%d",sum,rev);
 } 
 void sumrev(int *p,int *r,int *n)
 {
    int a;
    while(*n>0)
    {
     a=*n%10;
     *p=*p+a;
     *r=*r*10+a;
     *n=*n/10;
     }
  }
