#include<stdio.h>
int main()
{
     int *prt1,a[10],i,n,sum=0;
     printf("how many numbers in the array");
     scanf("%d",&n);
     prt1=a;
     for(i=0;i<n;i++)
     {
     scanf("%d",&a[i]);
     sum=sum+*prt1;
     prt1+i;
     }
    printf("%d",sum);
}
