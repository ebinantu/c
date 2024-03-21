#include<stdio.h>
 int main()
 { 
    int k=1,i,n,small,large,a[99],p;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
   for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
   }
  while(k<n)
   {
     large=0;
     p=1;
    for(i=0;i<n;i++)
    { 
        if(a[large]<a[p])
         { 
           small=a[large];
           a[large]=a[p];
           a[p]=small;
         }
         p++;
         large++;
     }
      k++;
    } 
     for(i=0;i<n;i++)
     { 
        printf("%d,",a[i]);
     } 
 } 
