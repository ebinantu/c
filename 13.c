#include<stdio.h>
int main()
{ 
   int n,f,s=1,t=1;
   printf("enter the limt");
   scanf("%d",&n);
   f=0;
   while(f<=n)
   {
      printf("%d\t",f);
      f=s;
      s=t;
      t=f+s;
    }
 }
                         
