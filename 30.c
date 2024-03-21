#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,*p,i,s=0;
  printf("enter the number of elements ");
  scanf("%d",&n);
  p=(int *)malloc(n*sizeof(int));
  if(p==NULL)
  {
    printf("memory is not allocated");
    exit(0);
   }
   else
   {
     printf("Enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        s=s+*(p+i);
     }
  
   }
   printf("sum of elements=%d",s);
  }
