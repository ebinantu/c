#include<stdio.h>
int main()
{
  int n=2,flag=0;
   printf("To print prime numbers less than 100");
  for(n;n<=100;n++)
  { 
  flag=0;
  int i=2;
  while(i<=n/2)
  { 
  if(n%i==0)
  { 
    flag=1;
    break;
   }
   i++;
 }
   
   if(flag==0)
   printf("%d ",n);
  }
  }
  
