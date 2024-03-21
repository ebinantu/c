#include<stdio.h>
int main()
{
int n,i,p=1,s=0;
printf("enter the number of odd numbers:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   s=s+p;
   p=p+2;
   }
   printf("sum of first %d odd number is: %d",n,s);
   }
