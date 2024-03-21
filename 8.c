#include<stdio.h>
main()
{
int i,n,a=0,u;
printf("Enter a number");
scanf("%d",&n);
i=0;
u=n;
while(n!=0)
{
 i=n%10;
 a=i*i*i+a;
 n=n/10;
 }
 if(u==a)
 {
 printf("number is a amstrong");
 }
 else
 { 
 printf("number is ! amstrong");
 }
 }
 
