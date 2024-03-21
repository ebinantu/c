#include<stdio.h>
main()
{
 int *p,*q,a,b,d,*r;
 printf("enter the element a,b);
 scanf("%d%d",&a,&b);
 printf("before interchange A=%d B=%d\n",a,b);
 r=&d;
 p=&a;
 q=&b;
 *r=*p;
 *p=*q;
 *q=*r;
 printf("a=%d\tb=%d",a,b);
 }
