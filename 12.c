#include<stdio.h>
int main()
{
   int a[100],sum=0,n,i=0;
   float avg=0;
   printf("number of number you want");
   scanf("%d",&n);
   while(i<n)
   {
       scanf("%d",&a[i]);
       i++;
     }
    for(i=0;i<=n;i++)
    {
        
      sum=sum+a[i];
    }
     avg=(float)sum/n;
  printf("sum=%d avg=%f",sum,avg);
  }
