#include<stdio.h>
int fact(int n) 
{ 
  static int a=1,f=1;
  f=f*a;
  a++;
  while(a<=n)
  fact(n);
 return f;
 }
 int main()
 { 
  
  int a;
  printf("enter the number:");
  scanf("%d",&a);
  printf("factorial(%d)=%d",a,fact(a));
 }
