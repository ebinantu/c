#include<stdio.h>
int rev(int a);
int main()
{
  int a,revs;
  printf("enter a number:");
  scanf("%d",&a);
  revs=rev(a);
  printf("%d",revs);
 }
 
 int rev(int a)
 {
    int sum=0;
    while(a!=0)
    {
    sum=(a%10)+sum*10;
    a=a/10;
    }
    return sum;
 }
    
