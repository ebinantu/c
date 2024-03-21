#include<stdio.h>
int main()
 {
    int n,a,b;
    printf("enter the number of number that you want to check");
    scanf("%d",&n);
    printf("enter the number");
    scanf("%d",&a);
    while(n>1)
    { 
      printf("enter the number");
      scanf("%d",&b);
      if(a<b)
      a=b;
      n--;
     }
     
     
     printf("%d is the largest number ",a);
   }
