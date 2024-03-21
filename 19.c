#include<stdio.h>
int main()
{
   int a[10],*p,*q,i,n;
   printf("enter number of element");
   scanf("%d",&n);
   p=a;
   printf("enter the elements");
  
   for(i=0;i<n;i++)
   { 
      scanf("%d",&a[i]);
   } 
     for(i=0;i<n;i++)
     { 
        printf("%d is stored in %u\n",*p,p);
        p=p+1;
       
     }
  } 
  
